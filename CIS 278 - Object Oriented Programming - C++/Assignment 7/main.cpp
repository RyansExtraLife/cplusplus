/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>

using namespace std;

/* This is the first program that allows the user to input information and have it displayed back to them at a later time. 
 * author: Ryan Patterson
 * date: 8/27/13
 */

// This "class" is created to demonstrate (class A7_1)
class favoriteIceCream{
    public:
    void iceCreamInput(){
        cout << "Pleae enter your favorite flavor of ice cream: " << endl;
        // enld is used because namespace std is used.
        // This line is presented to user as  a direction for the user to follow.
        
        string flavor;
        // This line of code creates a variable for the information the user imputd to be stored.
        
        cin >> flavor;
        // Upon user input the ice cream selection is stored into "iceCream"
        
        cout << "I really like " << flavor << " as well, maybe we can ou some time to get some! \n"<<endl;
        // Using the submitted variable in a sentance to show that the information was
        // stored and retrieved successfully.
    }
};

// This "class" is created to demostrate (class A7_2)
class personalInformation{
    public:
    void collectingData(){
        cout << "Ok enought about icecream, lets get down to some more personal business. \n" << endl;
        cout << "This program will ask you a few questions and gather some personal information." << endl;
        
        // Inputed for cosmetic purposes, to make the program look more presentable.
        cout << "First if you can input your height in inchs to the nearest inch: \n"<< endl;
        // Asing the user to input his or her height in a specific mesurement. 
        
        int height;
        // creating the variable "height" for the data to be stored into.
        cin >> height;
        
        // inputing the users entered number into the variable height
        cout << "Ok now that we know your height is " << height << " inchs tall, now please enter your weight in pounds: "<< endl;
        
        // Showing the user that the computer stored the variable then asking another question to the user.
        int weight;
        
        // creating the variable "weight" for the data to be stored into.
        cin >> weight;
        
        // inputing the users entered number into the variable weight.
        cout << "Ok so you are " <<  weight << " pounds and " << height << " inchs tall, last question, how old are you in years? : " << endl;
        
        // Showing the user that the computer stored the variable then asking anohter question to the user.
        int age;
        
        // creating a varaible "age" for the data to be stored into.
        cin >> age;
        
        // inputing the useres entered number into "age".
        cout << "So from the information that this program has gathered from you, you are " << age << " years old, you weigh in at " << weight << " pounds  and are " << height << "inchs tall." << endl;
        // now the program is dispalying all information that was gathered into one sentence. 
    }
    
};

int main ()
{
    favoriteIceCream a71;
    a71.iceCreamInput();
    
    personalInformation a72;
    a72.collectingData();
    
    return 0;
}

/*
 Pleae enter your favorite flavor of ice cream:
 Vanilla
 I really like Vanilla as well, maybe we can ou some time to get some!
 
 Ok enought about icecream, lets get down to some more personal business.
 
 This program will ask you a few questions and gather some personal information.
 First if you can input your height in inchs to the nearest inch:
 
 72
 Ok now that we know your height is 72 inchs tall, now please enter your weight in pounds:
 200
 Ok so you are 200 pounds and 72 inchs tall, last question, how old are you in years? :
 25
 So from the information that this program has gathered from you, you are 25 years old, you weigh in at 200 pounds  and are 72inchs tall.
 
 
 */
