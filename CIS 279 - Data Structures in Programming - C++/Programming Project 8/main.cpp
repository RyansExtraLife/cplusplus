#include <iostream>
#include "EdgeNode.h"
#include "Graph.h"

using namespace std;


int main()
{
    Graph<string> ClassPrerequisite;
    int user_Selection = 0;
    bool application_loop = false;
    
    
    
    while (application_loop == false)
    {
        
        cout << "** Class Management Software ** " << endl;
        cout << " " << endl;
        cout << "Please select an option from the list below. " << endl;
        cout << "1.) Add a New Course. " << endl;
        cout << "2.) Add a Prerequisite to a Course. " << endl;
        cout << "3.) Remove a Prerequisite to a Course. " << endl;
        cout << "4.) Check for a Prerequisite for a Course." << endl;
        cout << "5.) Show a patch from one class to another." << endl;
        cout << "6.) Print All Classes that Proceed a Cource." << endl;
        cout << "7.) Print All Classes that are stored. " << endl;
        cout << "8.) Exit Program. " << endl;
        cin >> user_Selection;

        if (user_Selection == 1 )
        {
            string temp_string;
            cout << "**   Add A New Cource Manager   **" << endl << endl;
            cout << "Enter the name of the course you would like to add to the system: " << endl;
            cin >> temp_string;
            ClassPrerequisite.add_vertex(temp_string);
            cout << "The class " << temp_string << " has been added to the course list." << endl;
            user_Selection = 0;
        }
        
        if (user_Selection == 2 )
        {
            string temp_string_one;
            string temp_string_two;
            cout << "**  Add a Prerequisite to a Course  ** " << endl;
            cout << "Enter the name of the course prerequsite : " << endl;
            cin >> temp_string_two;
            cout << "Enter the name of the course : " << endl;
            cin >> temp_string_one;
            if ( ClassPrerequisite.getIndex(temp_string_one) == -1)
            {
                cout << "Class: " << temp_string_one << ", does not exist in the course list." << endl;
            }
            else if ( ClassPrerequisite.getIndex(temp_string_two) == -1)
            {
                cout << "Class: " << temp_string_two << ", does not exist in the course list." << endl;
            }else{
            ClassPrerequisite.add_edge(ClassPrerequisite.getIndex(temp_string_one), ClassPrerequisite.getIndex(temp_string_two));
            cout << temp_string_two << " is now a prerequiste of " << temp_string_one << ". " << endl;
            }
            user_Selection = 0;
        }
    
        if (user_Selection == 3 )
        {
            string temp_string_one;
            string temp_string_two;
            cout << "**  Remove a Prerequisite to a Course  ** " << endl;
            cout << "Enter the name of the that needs a prerequiste course : " << endl;
            cin >> temp_string_one;
            cout << "Enter the name of the course that is its prerequiste: " << endl;
            cin >> temp_string_two;
            if ( ClassPrerequisite.getIndex(temp_string_one) == -1)
            {
                cout << "Class: " << temp_string_one << ", does not exist in the course list." << endl;
            }
            else if ( ClassPrerequisite.getIndex(temp_string_two) == -1)
            {
                cout << "Class: " << temp_string_two << ", does not exist in the course list." << endl;
            }else{
                ClassPrerequisite.remove_edge(ClassPrerequisite.getIndex(temp_string_one), ClassPrerequisite.getIndex(temp_string_two));
                cout << temp_string_one << " is no longer a prerequiste of " << temp_string_two << ". " << endl;
            }
            user_Selection = 0;
        }
    
        if (user_Selection == 4 )
        {
            string temp_string_one;
            string temp_string_two;
            cout << "**  Check for  immediate Prerequisite to a Course  ** " << endl;
            cout << "Enter the name of course : " << endl;
            cin >> temp_string_two;
            cout << "Enter the name of the course that is its prerequiste: " << endl;
            cin >> temp_string_one;
            if ( ClassPrerequisite.getIndex(temp_string_one) == -1)
            {
                cout << "Class: " << temp_string_one << ", does not exist in the course list." << endl;
            }
            else if ( ClassPrerequisite.getIndex(temp_string_two) == -1)
            {
                cout << "Class: " << temp_string_two << ", does not exist in the course list." << endl;
            }else{
                if(ClassPrerequisite.is_edge(ClassPrerequisite.getIndex(temp_string_two), ClassPrerequisite.getIndex(temp_string_one)) == true)
                {
                    cout << temp_string_two << " is a direct prerequiste of " << temp_string_one << ". " << endl;
                }else{
                    cout << temp_string_two << " is NOT a direct prerequiste of " << temp_string_one << ". " << endl;
                }
            }
            user_Selection = 0;
        }
        if (user_Selection == 5 )
        {
        
            string temp_string_one;
            string temp_string_two;
            cout << "**  Check for  Path from one Course to another Course.  ** " << endl;
            cout << "Choose a Prereiuste Class:   " << endl;
            cin >> temp_string_one;
            cout << "Choose a Class that you want to see if there is a path.   " << endl;
            cin >> temp_string_two;
            
            
            
            cout << "Checking Breadth First. " << endl;
            if ( ClassPrerequisite.is_path_breadth(ClassPrerequisite.getIndex(temp_string_one), ClassPrerequisite.getIndex(temp_string_two)))
                {
                    cout << " PATH FOUND!" << endl;
                }else{
                    cout << " There is no path. " << endl;
                }
            
            cout << " Checking Depth Second. " << endl;
            if (ClassPrerequisite.is_path_depth(ClassPrerequisite.getIndex(temp_string_one), ClassPrerequisite.getIndex(temp_string_two)))
                {
                    cout << " PATH FOUND!" << endl;
                }else{
                   cout << " There is no path. " << endl;
                }
            
            user_Selection = 0;
        }
        if (user_Selection == 6 )
        {
            cout << "** Print out all of the Classes  that can be taken after a Class **" << endl;
            string temp_class;
            cout << "Please enter the name of the class that is a prerecquiste class: " << endl;
            cin >> temp_class;
            set<size_t> temp_set;
            if(ClassPrerequisite.getIndex(temp_class) == -1)
            {
                cout << temp_class << " is not a valid class. " << endl;
            }else{
                size_t Class = ClassPrerequisite.getIndex(temp_class);
                temp_set = ClassPrerequisite.neighbors(Class);
                for (set<size_t>::iterator it=temp_set.begin(); it!=temp_set.end(); ++it)
                {
                    cout << ' ' << ClassPrerequisite[*it] << endl;
                }
            }
            user_Selection = 0;
        }
        
        if (user_Selection == 7 )
        {
            cout << "** Print out all of the Classes that are stored in the application. " << endl;
            size_t size = ClassPrerequisite.size();
             cout << "List of classes that are in the system: " << endl;
            for (int i =0; i < size; i++)
            {
               
                cout << " " << ClassPrerequisite[i]<< endl;
            }
            user_Selection = 0;
        }
    
        if (user_Selection == 8 )
        {
            cout << "** Thank you for using Class Management Software. **" << endl;
            application_loop = true;
        }
    }
}

