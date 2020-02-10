/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>

using namespace std;

int main (){
    int pointsEarned = 0;
    // The base variable and assignment of base value "0".
    cout << "Enter the points earned by the student: ";
    cin >> pointsEarned;
    
    // The basic interface for the user to imput the grades.
    //If submitted grade is less then 60 it will assign a "F" if it is more it will move on down.
    if (pointsEarned <60){
        cout << "The Grade Earned is:" << "F";
    }else{
        //If submitted grade is less then 60 it will assign a "D" if it is more it will move on down.
        if(pointsEarned<70){
            cout << "The Grade Earned is:" << "D";
        }else{
            //If submitted grade is less then 60 it will assign a "C" if it is more it will move on down.
            if(pointsEarned<80){
                cout << "The Grade Earned is:" << "C";
            }else{
                //If submitted grade is less then 60 it will assign a "B" if it is more it will move on down.
                if(pointsEarned<90){
                    cout << "The Grade Earned is:" << "B";
                }else{
                    //If submitted grade is less then 60 it will assign a "F" if it is more it will move on down.
                    if(pointsEarned<100){
                        cout <<" The Grade Earned is:" << "A";
                    }else{
                        //If submitted grade is less then 60 it will assign a "Great Job Ace!"
                        if(pointsEarned==100){
                            cout <<" GREAT JOB ACE!";
                        }
                    }
                }
            }
        }
    }
return 0; //end program.
}
 
  
