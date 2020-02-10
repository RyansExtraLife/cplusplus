// Function used to call a print. 


#include <iostream>
#include <ctime> 
#include <cstring>
#include <string>
using namespace std;

// SuperClass that has the variables for name and phonenumber.
class Contact{
  
    protected:
    // Protected is used in place of private so that the dervied classes can use the variables.
    string mName;
    // string data type variable that is created to store the name of a contact.
    string mPhone;
    // string data type to store the phone number of the contact.
    
    public:
    
    /* 
    // Constructor for class Contact, initializing a string variable for "name" and "phone"
    // Numbers passed into it from the int main section will be placed into it.
    // After the : is the assignemnt statement. mName and mPhone will be set to what is passed through the constructor.
    */
    Contact( string name , string phone) : mName (name), mPhone (phone){

    }
    
    // Method used to display "hi" and the contacts "mName".
    // It is declared as "virtual" so that it can be overridden in the case that it is needed to be overridden.
    // This will happen if the date of the "mNames" birthday is equal to todays date.
    virtual void sendMessage(string msg){
        cout << msg;
        //This will display a message that is displayed from the name set by the construtor.
    }
};

//derived class of contact to include the month,date, and year passed into it be set.
class FriendContact : public Contact{
    protected:
    // Protected is used so future derived classes can use the variables.
    int mMonth;
    // int data type to store the users birth Month.
    int mDate;
    // int data type to store the users birth Date.
    int mYear;
    // int data type to store the users birth year.

    public:
    FriendContact(string name, string phone, int month, int date, int year) : Contact(name, phone), mMonth(month), mDate(date), mYear(year)
    /*
    // This constructor takes the variables for "name", "phone","month", "day", "year".
    // It then passes "name" and phone into the constructor for class "Contact" allowing it to initalize the variables.
    // Then it sets the data types to there coresponding protected types, month to mMonth ect.
    // Do note that the private variables from the super clas cannot be used in this class.
    */
    {
        
    }
    // Parameters for constructor, all objects are constructed before the the parameters section is set
    // so none are needed to be placed here.

    
    void sendMessage(string msg)
    // This overides the method "sendMessage" in the superclass if it called.
    {
        Contact::sendMessage(msg);
        // This call calls the "sendMessage" from the superclass.
        // Because the superclass has been overriden by the derived class, you have to call it in order for it to display.
        
      
        
        time_t today = time(0);
        struct tm * now =  localtime(&today);
        
        int day = now->tm_mday;
        // Declares the variable "day" and sets it to the current day using "ctime".
        int month = now->tm_mon +1;
        // Declares teh variable "month" and sets it to the current month using the "ctime".
 
        
        if (mDate == day && mMonth == month)
        // This if statment checks to see if the current day is equal to the contcts birthday.
        // Then the if that is true it checks to see if the current month is equal to the
        // the contacts birthmonth as well.
        // If it is true it spits out the extra line of code, wishing them a happy birthday.
        {
            cout << ", Happy Birthday!" << endl <<endl;
        }
    }
    
};


int main(){
    Contact RyansContact ("Ryan","650-771-1041");
    // Creates object from Class "Contact" named "RyansContact" and passes to the constructor "Ryan" and "650 ect."
    
    FriendContact RyansBirthday ("Ryan","650-771-1041",11,22,1986);
    // Creates an object from Class "FreindContact" and intializes the five variables " mName, mNumber, mMonth, mDate, mYear".
    // The constructor uses the construtor from FriendClass and then passes the missing variables into the construtor for Contact.
    
    RyansBirthday.sendMessage("Hello Ryan");
    // Passeses the message "Hello" into the object "RyansBirthday"
    // The current date set in Ryans Birthday is 11,22,1986.
    // This trigers the if statment to print out the second message as well, the happy birthday message.
    
    FriendContact AlyssasBirthday ("Alyssa","650-222-1733",1,15,1988);
    // This constructs an object witht the variables for contact Alyssa.
    
    AlyssasBirthday.sendMessage("Hello Alyssa");
    // This calles the sendMessage method and checks to see if the birthday matches.
    // The birthdays do not match so only the orignal message is displayed.
};

// Output
// Hello Ryan
// Hello Alyssa





