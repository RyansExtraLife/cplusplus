#include <iostream>

#include "Heap.h"
#include "Patient.h"

using namespace std;

int main()
{
    Heap<Patient> Operating_Room_One(15);
    Heap<Patient> Operating_Room_Two(15);
    
    while (Operating_Room_One.IsFull() != true && Operating_Room_Two.IsFull() != true)
    {
        string temp_paticent_name;
        string temp_paticent_malady;
        int temp_paticent_priority;
        
        cout << "New Patient Entry: " << endl;
        cout << "Please Enter The Paticents First and Last Name: " << " ";
        getline (cin,temp_paticent_name);
        
        cout << "Please Enter The Paticents Malady: " << " ";
        getline (cin, temp_paticent_malady);
        
        cout << "Please Enter the Paticents Priority: (1-10) " << " ";
        cin >> temp_paticent_priority;
        
        while (temp_paticent_priority <=0 or temp_paticent_priority > 10)
        {
            cout << "The Priority was not a value between 1 and 10." << endl;
            cout << "Please Reenter a value: " << endl;
            cin >> temp_paticent_priority;
        }
        
        if (Operating_Room_One.IsFull() != true)
        {
            Operating_Room_One.add(*new Patient(temp_paticent_name,temp_paticent_malady,temp_paticent_priority));
            cout << "The Patient has been added to Operating Room One." << endl << endl;
        }else{
            Operating_Room_Two.add(*new Patient(temp_paticent_name,temp_paticent_malady,temp_paticent_priority));
            cout << "The Patient has been added to Operating Room Two." << endl << endl;
        }
    }
    
    cout << "Patients in Operating Room One in order of Priority: " << endl;
    for (int i =0; i < 15; i++)
    {
        cout << Operating_Room_One[i] << endl;
    }
    
    cout << "Patients in Operating Room Two in order of Priority: " << endl;
    for (int i =0; i < 15; i++)
    {
        cout << Operating_Room_Two[i] << endl;
    }
    
    
}
