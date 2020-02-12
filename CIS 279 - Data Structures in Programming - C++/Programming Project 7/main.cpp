#include <iostream>

using namespace std;

int main()
{
    bool whileLoop = false;
    
    while( whileLoop != true)
    {
        int optionSelection = 0;
        
        while (optionSelection <=0 && optionSelection >=5)
        {
            string tempName;
            string tempAddress;
            int tempNumber;
            
            cout << "*** Customer Addition Form ***" << endl;
            cout << "Please enter the customer name: ";
            cin >> tempName;
            
            cout << endl << "Please enter the customer Address: ";
            cin >> tempAddress;
            
            cout << endl << "Please enter the cusotmer's Phone Number: ";
            cin >> tempNumber;
        }
        if (optionSelection == 1)
        {
            
        }
        if (optionSelection == 2)
        {
            
        }
        if (optionSelection == 3)
        {
            
        }
        if (optionSelection ==4)
        {
            whileLoop = true;
        }
        optionSelection = 0;
    }
}
