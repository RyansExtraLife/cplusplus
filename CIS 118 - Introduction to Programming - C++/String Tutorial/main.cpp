/*
 Main written by Ryan Patterson
 Online class CIS 118
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    // Demonstrates Logical Operators
    char areYouHungry = 'x';
    char youHaveMoney = 'x';
    char youHaveTransportation = 'x';
    char mcDonaldsIsOpen = 'x';
    char youHaveTime = 'x';
    
    cout << "Answer the following question with 'Yes' or 'No' to determine if you have the means to go eat.";
    cout << endl;
    cout << " ";
    cout << endl;
    
    cout << "Are you Hungry right now? Y/N: "; 
    cin >> areYouHungry;
    cout << endl;
    
    cout << "Do you have money to eat? Y/N: "; 
    cin >> youHaveMoney;
    cout << endl;
    
    cout << "Do you have a means of Transportation? Y/N: ";
    cin >> youHaveTransportation;
    cout << endl;
    
    cout << "Is McDonalds currently open? Y/N: ";
    cin >> mcDonaldsIsOpen;
    cout << endl;
    
    cout << "Do you have the time to go eat? Y/N: ";
    cin >> youHaveTime;
    cout << endl;
    
    // Takes ALL to be TRUE, so result is TRUE
    if ((areYouHungry == 'Y')&&(youHaveMoney == 'Y')&&( youHaveTransportation == 'Y')&&(mcDonaldsIsOpen == 'Y')&&(youHaveTime == 'Y')) {
        cout << endl << " Well looks like you have met all the criteria to get yourself some Mcdonalds! " << endl;
    }
    // Only takes one FALSE condition, so result is FALSE
    else if ((areYouHungry == 'Y')&&(youHaveMoney == 'Y')&&(youHaveTransportation == 'Y')&&(mcDonaldsIsOpen == 'Y')&&(youHaveTime == 'N')){
        cout << " Once you free up some time you should go eat! " << endl;
    }
    // Only takes one FALSE condition, so result is FALSE
    else if ((areYouHungry == 'Y')&&(youHaveMoney == 'Y')&&(youHaveTransportation == 'Y')&&(mcDonaldsIsOpen == 'N')&&(youHaveTime == 'N')){
        cout << " Well Mcdonalds isnt open, then looks like you will have to wait a while." << endl;
    }
    // Only takes one FALSE condition, so result is FALSE
    else if ((areYouHungry == 'Y')&&(youHaveMoney == 'Y')&&(youHaveTransportation == 'N')&&(mcDonaldsIsOpen == 'N')&&(youHaveTime == 'N')){
        cout << " No Car? No Bike? Not even a Bus? "<< endl;
    }
    // Only takes one FALSE condition, so result is FALSE
    else if ((areYouHungry == 'Y')&&(youHaveMoney == 'N')&&(youHaveTransportation == 'N')&&(mcDonaldsIsOpen == 'N')&&(youHaveTime == 'N')){
        cout << " Well first you should get some Money " << endl;
    }
    // Only takes one FALSE condition, so result is FALSE
    else if ((areYouHungry == 'N')&&(youHaveMoney == 'N')&&(youHaveTransportation == 'N')&&(mcDonaldsIsOpen == 'N')&&(youHaveTime == 'N')){
        cout << " If you are not hungry then you should not eat.  " << endl;
    }
    return 0;
}
