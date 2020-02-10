/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

class eMail{
    public:
    void checkInbox(){
        int num = rand() % 5;
        cout << "There are " << num << " new E-Mails in my inbox.\n";
    }
};

class cookieJar{
public:
    void CookiesInJar(){
        int num =rand() % 30;
        cout << "Eating " << num << " of my girlfirends homeade cookies sure did make me happy.\n";
    }
};

//Both programs work indpendently of each other but where put into one program for the sake of submission. 

int main(){
    srand(time(NULL));

    eMail mail;
    mail.checkInbox();
    //I am calling the Class of "eMail" to print out the number genertated by "rand"
    
    
    /* I recived the messages:
     There are 4 new E-Mails in my inbox.
     There are 2 new E-Mails in my inbox.
     There are 5 new E-Mails in my inbox.
     Thus verifying that the number generator is working corretly. 
     */
    
    cookieJar cookie;
    cookie.CookiesInJar();
    //I am calling the Class of "cookieJar" to print out the number genertated by "rand"
    
    /* I recived the messages:
     Eating 22 of my girlfirends homeade cookies sure did make me happy.
     Eating 15 of my girlfirends homeade cookies sure did make me happy.
     Eating 12 of my girlfirends homeade cookies sure did make me happy.
     Thus verifying that the number generator is working corretly. 
     */
    
    return 0;
};
