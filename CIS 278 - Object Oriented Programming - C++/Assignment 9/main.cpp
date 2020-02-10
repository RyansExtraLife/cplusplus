/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
using namespace std;

    class A9_1
        {
        public:
            void weatherOutSide ()
            {
            
                cout << "Hello, today I am going to ask you a few questions to see if you should bring a jacket today. \n";
                cout << "Is it raining outside? Please answer with a 'y' or 'n'\n";
                
                char isItRaining;
                cin >> isItRaining;
                
                cout << "Ok good, now is it cold outside? Please answer with a 'y' or 'n'\n";
                
                char isItCold;
                cin >> isItCold;
                
                if (isItCold == 'y' or isItRaining == 'y')
                {
                    cout << "You should grabe a Jacket before you go out!\n";
                }
                else
                {
                    cout << "Sounds like a beautfuil day outside, I hope you get to enjoy it.\n";
                }
            
            }
        };
    
    class A9_2
        {
        public:
            void richAndFamous ()
            {
                cout << "Do you want to be rich? Please answer with a 'y' or 'n'\n";
                
                char wantToBeRich;
                cin >> wantToBeRich;
                
                cout << "Ok next question, Do you want to be famous? Please answer with a 'y' or 'n'\n";
                
                char wantToBeFamous;
                cin>> wantToBeFamous;
                
                if ( wantToBeFamous == 'y' and wantToBeRich == 'y')
                    {
                        cout << "Well no one ever got in trouble for dreaming big!\n";
                    }
                else
                    {
                        cout << "Yeah, nobody should have everything\n";
                    }
            }
        };
        
int main ()
    {
        A9_1 jacketTime;
        jacketTime.weatherOutSide();
        
        A9_2 richFamous;
        richFamous.richAndFamous();
    
        return 0;
    }
/*
 Hello, today I am going to ask you a few questions to see if you should bring a jacket today.
 Is it raining outside? Please answer with a 'y' or 'n'
 n
 Ok good, now is it cold outside? Please answer with a 'y' or 'n'
 n
 Sounds like a beautfuil day outside, I hope you get to enjoy it.
 Do you want to be rich? Please answer with a 'y' or 'n'
 n
 Ok next question, Do you want to be famous? Please answer with a 'y' or 'n'
 n
 Yeah, nobody should have everything
*/
