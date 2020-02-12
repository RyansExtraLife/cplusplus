#ifndef Programming_Project_6_Patient_h
#define Programming_Project_6_Patient_h

#include <iostream>

using namespace std;

class Patient
{
private:
    string name;                                                                        // Variable that stores Paticents name.
    string malady;                                                                      // Varaible that stores Paticents malady.
    int thepriority;                                                                    // Variable that stores Paticents priority.
    
public:
    Patient(); 
    Patient(string, string, int);
    string getName();                                                                   // Function that returns the private variable "name".
    string getMalady();                                                                 // Function that returns the private variable "malady".
    int getPriority();                                                                  // Function that returns the private variable "thePriority".
    Patient& operator < (const Patient& obj);                                           // Function that returns true if Priority is Less then.
    Patient& operator > (const Patient& obj);                                           // Function that returns true if Priority is Greater then.
    Patient& operator == (const Patient& obj);                                          // Function that returns true if Priority is Equal to.
    friend ostream& operator<<(ostream& out, const Patient& obj);                       // Friend Function that outputs contents of Patient Class
};

string Patient::getName()                                                               // Function that returns the private variable "name".
{ return name; }

string Patient::getMalady()                                                             // Function that returns the private variable "malady".
{ return malady; }

int Patient::getPriority()                                                              // Function that returns the private variable "thePriority".
{ return thepriority;}

bool operator < (Patient patient1, Patient patient2)                                    // Boolean operator that returns true if the priority of patient1
{ return patient1.getPriority() < patient2.getPriority();}                              // is less then patient2, if not returns false.

bool operator > (Patient patient1, Patient patient2)                                    // Boolean operator that returns true if the priority of patient1
{ return patient1.getPriority() > patient2.getPriority();}                              // is greater then patient2,  if not returns false.

bool operator == (Patient patient1, Patient patient2)                                   // Boolean operator that returns true if the priority of patient1
{ return patient1.getPriority() == patient2.getPriority();}                             // is equal to  patient2, if not returns false.

ostream& operator<<(ostream& out, Patient& obj)                                         // Friend Funcition that outputs the contents of the Patient Class.
{
    out << "Patient Name: " << obj.getName() << endl;
    out << "Patient Malady: " << obj.getMalady() << endl;
    out << "Patient Priority: " << obj.getPriority() << endl << endl;
    return out;
}

#endif
