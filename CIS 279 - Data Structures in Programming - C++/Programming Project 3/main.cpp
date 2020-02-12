#include <iostream>

#include "RegList.h"
#include "node1.h"

using namespace std; 

int main()
{

    RegList Enrolled_List(5);                                                   // Creates a RegList object called Enrolled List. This sets the amount of students that
                                                                                // can be added to the node list to five people.
    RegList Wait_List(5);                                                       // Creates a Reglist object called Standby_list. This sets the amount of students that
                                                                                // can be aded to the node list ot five people.
    int user_inputed_stuID = 000000;                                            // Variable that is used to hold the users input for stuId's.
    int user_inputed_selection =0;                                              // Variable that is used ot hold the users command seleciton choise.
    int application_loop = 0;                                                   // Variable that will keep the program looping until the exit command is issued.
    
    
    cout << " *** Welcome to the CIS 279 Class Enrollment Application *** " << endl << endl;
    while (application_loop == 0)
    {
        user_inputed_stuID = 000000;
        cout << "Please select a command from the following selection. " << endl;
        cout << "1.) Register a Student. " << endl;
        cout << "2.) Remove a Student. " << endl;
        cout << "3.) Print the amount of students in the class. " << endl;
        cout << "4.) Print the student Id numbers of students enrolled in the class. " << endl;
        cout << "5.) Exit the application. " <<endl;
        while (user_inputed_selection <= 0 or user_inputed_selection > 5)
        {
            cout << "Please enter a number between 1-5. " << endl;
            cin >> user_inputed_selection;
        }
       
        if (user_inputed_selection == 1 )
        {
            cout << endl << endl << " *** Register Student to Class *** " << endl << endl;
            while (user_inputed_stuID < 99999 or user_inputed_stuID > 1000000)
            {
                cout << "Enter the six digit student ID number you wish to register to the class: " << endl << endl;
                cin >> user_inputed_stuID;
            }
            if (Enrolled_List.isEnrolled(user_inputed_stuID) == true)
            {
                cout << "The student is already enrolled. " << endl << endl;
            }else{
            
            
            if (Enrolled_List.isFull() == false)
            {
                Enrolled_List.addStudent(user_inputed_stuID);
                cout << "Student with ID# " << user_inputed_stuID << " Has been added to the class." << endl << endl;
            }else{
                
                if (Wait_List.isFull() == false)
                {
                    
                    if (Wait_List.isEnrolled(user_inputed_stuID))
                    {
                        cout << "The student is already on the Wait List" << endl << endl;
                        }else{
                        Wait_List.addStudent(user_inputed_stuID);
                        cout << "Student with ID# " << user_inputed_stuID << " Has been added to the waitlist due to the class being full. " << endl <<endl;
                    }
                }else{
                cout << "Sorry but the Class and Wait List are currently Full. " << endl << endl;
                }
            }
            }
            user_inputed_selection = 0;
        }
    
        if (user_inputed_selection == 2)
        {
            cout << endl << endl << " *** Unregister Student from Class *** " << endl << endl;
            while (user_inputed_stuID < 99999 or user_inputed_stuID > 1000000)
            {
                cout << "Enter the six digit student ID number you wish to remove from the class or waitlist. " << endl;
                cin >> user_inputed_stuID;
            }
        
            if (Enrolled_List.isEnrolled(user_inputed_stuID) == true)
            {
                Enrolled_List.removeStudent(user_inputed_stuID);
                cout << "Student ID #: " << user_inputed_stuID << " has been removed from the class." << endl << endl;
                
                
            
                if (Wait_List.isEmpty() == false)
                {
                    int temp_stu_ID;
                    temp_stu_ID = Wait_List.removeFromFront();
                    Enrolled_List.addStudent(temp_stu_ID);
                    cout << "Student ID #: " << temp_stu_ID << " has been moved from the waitlist to the enrolled list. " << endl;
                }
                
            }else{
                if (Wait_List.isEnrolled(user_inputed_stuID) == true)
                {
                    Wait_List.removeStudent(user_inputed_stuID);
                }else{
                cout << "The student was not enrolled in the class. " << endl;
                }
            }
        user_inputed_selection = 0;
        }
    
        if(user_inputed_selection == 3)
        {
            cout << " *** Print the Amount of Students in the Class and Wait List *** " << endl;
            int print_number = 0;
            cout << "What would you like to print out. " << endl;
            cout << "1.) Number of Students Enrolled in the class. " << endl;
            cout << "2.) Number of Students Wait Listed in the class. " <<endl;
            cout << "3.) Number of Students Enrolled and Waitlisted in the class. " << endl;
            while (print_number < 1 or print_number > 3)
            {
                cout << "Enter your selction: (1-3)" << endl;
                 cin >> print_number;
            }
       
        
            if (print_number == 1)
            {
                cout << endl << "The number of Students Enrolled in the class is: " << Enrolled_List.listSize() << endl << endl;
            }
        
            if (print_number == 2)
            {
                cout << endl << "The number of Students Wait Listed in the class is: " << Wait_List.listSize() << endl <<endl;
            }
        
            if (print_number == 3)
            {
                cout << endl << "The number of Students Enrolled in the class is: " << Enrolled_List.listSize() << endl << endl;
                cout << endl << "The number of Students Wait Listed in the class is: " << Wait_List.listSize() << endl <<endl;
            }
        user_inputed_selection = 0;
        }
        
        if(user_inputed_selection == 4)
        {
            cout << " *** Prints the Student ID Numbers of Students Enrolled in and Waitlisted for the Class." << endl;
            int print_selection = 0;
            cout << "What would you like to print out. " << endl;
            cout << "1.) Student ID numbers that are Enrolled in the class." << endl;
            cout << "2.) Student ID numbers that are Waitlisted for the class." << endl;
            cout << "3.) Student ID number that are Enrolled and Wait Listed in the class." << endl;
            while (print_selection < 1 or print_selection > 3)
            {
                cout << "Enter your Selection: (1-3) " << endl;
                cin >> print_selection;
            }
           
            if ( print_selection==1)
            {
                cout << " *** Students Enrolled in the Class *** " << endl;
                cout << endl;
                cout << Enrolled_List << endl;
                cout << endl;
            }
        
            if (print_selection ==2)
            {
            cout << " *** Students Waitlisted for the Class *** " << endl;
            cout << endl;
            cout << Wait_List << endl;
            cout << endl;
            }
        
            if (print_selection ==3)
            {
            cout << " *** Students Enrolled in the Class *** " << endl;
            cout << endl;
            cout << Enrolled_List << endl;
            cout << endl;
            cout << " *** Students Waitlisted for the Class *** " << endl;
            cout << endl;
            cout << Wait_List << endl;
            cout << endl;
            }
        user_inputed_selection = 0;
        }
        if(user_inputed_selection == 5)
        {
            application_loop++;
        }
    }
    
    cout << "Thank you for using the CIS 279 Class Enrollement Application. " << endl; 
}

