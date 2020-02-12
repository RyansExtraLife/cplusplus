//
//  main.cpp
//  Programming Project 5
//
//  Created by Ryan Michael on 4/4/14.
//  Copyright (c) 2014 Ryan Michael. All rights reserved.
//

#include <iostream>
#include "bintree.h"
#include "bag6.h"

using namespace std;


int main()
{
    main_savitch_10::bag<int> Main_Bag;
    
    main_savitch_10::bag<int> Temp_Second_Bag;
    
    main_savitch_10::bag<int> Temp_Second_Bag_Two;
    main_savitch_10::bag<int> Temp_Third_Bag_Two;
    
    bool tree_two_created = false;
    bool tree_three_created = false;
    
    bool application_loop = false;
    int user_inputed_selection = 0;
    
    
    while (application_loop == false)
    {
        cout << "Welcome to the Binary Search Tree Application Menu" << endl << endl;
        cout << "Please select an option from the following choices." << endl;
        cout << "1.) Interset an Int Value into the bag." <<endl;
        cout << "2.) Remove an Int Value from the bag." <<endl;
        cout << "3.) Print the number of Int Value" <<endl;
        cout << "4.) Create a New Bag and add its contents to the main bag." <<endl;
        cout << "5.) Create a New Bag and add its contetns to tehe main bag, creating a third bag." <<endl;
        cout << "6.) Print the number of Occrences of an Int in the Binary Search Tree." <<endl;
        cout << "7.) Print One of the Binary Search Trees" <<endl;
        cout << "8.) Exit the application." <<endl;
        
        while (user_inputed_selection <= 0 or user_inputed_selection > 8)
        {
            cout << "Please enter a number between 1-5. " << endl;
            cin >> user_inputed_selection;
        }
        
        if (user_inputed_selection == 1)
        {
            cout << endl << " *** Insert an Int Value ***  " << endl;
            int User_Inputed_Int = 0;
            cout << "Please Enter an Interger Value: " << endl;
            cin >> User_Inputed_Int;
            while (user_inputed_selection == 0)
            {
                cin.clear();
                cout << "Please Enter a Valid Int: " << endl;
                cin >> User_Inputed_Int;
            }
            Main_Bag.insert(User_Inputed_Int);
            cout << endl << "The int value: " << User_Inputed_Int << " has been added to the Binary Search Three." << endl;
            User_Inputed_Int = 0;
            user_inputed_selection = 0;
        }
        
        if (user_inputed_selection == 2)
        {
            cout << endl << " *** Remove an Int Value ***  " << endl;
            int User_Inputed_Int_Two = 0;
            cout << "Please Enter an Interger Value: " << endl;
            cin >> User_Inputed_Int_Two;
            while (User_Inputed_Int_Two == 0)
            {
                cin.clear();
                cout << "Please Enter a Valid Int: " << endl;
                cin >> User_Inputed_Int_Two;
            }
            Main_Bag.erase_one(User_Inputed_Int_Two);
            cout << endl << "The int value: " << User_Inputed_Int_Two << " has been removed from the Binary Search Three." << endl;
            User_Inputed_Int_Two = 0;
            user_inputed_selection = 0;
            
        }
        
        if (user_inputed_selection == 3)
        {
            cout << endl << " *** Insert an Int Value ***  " << endl;
            cout << "There are currently " << Main_Bag.size() << " Ints values in the Binary Tree. " << endl;
            user_inputed_selection = 0;
        }
        
        if (user_inputed_selection == 4)
        {
            cout << endl << " *** Create a Second Bag and add it to the Main Bag. ***  " << endl;
            
        
            cout << "First we will create a second binary tree bag that will be then added to the first. " << endl;
            int number_of_ints = 0;
            cout << "How many Ints would you like to place in the second bag." << endl;
            cin >> number_of_ints;
            while (number_of_ints == 0)
            {
                cout << "Please enter a valid Int" << endl;
                cin >> number_of_ints;
            }
            int remaing_loop = number_of_ints;
            
            for (int i =0; i < number_of_ints; i ++)
            {
                cout << "There are still " << remaing_loop << " Ints to add to the second bag. " << endl;
                int user_submitted_int;
                cout << "Please enter an Int to be added to the second bag. " << endl;
                cin >> user_submitted_int;
                Temp_Second_Bag.insert(user_submitted_int);
                user_submitted_int =0;
                remaing_loop --;
            }
            cout << "Now that the second bag has been created it will be added to the Main bag. " << endl;
            Main_Bag = Main_Bag + Temp_Second_Bag;
            cout << "The amount of Int items in the main bag is now: " << Main_Bag.size() << endl;
            
            tree_two_created = true;
            user_inputed_selection = 0;
            
        }
        
        if (user_inputed_selection == 5)
        {
            cout << endl << " *** Create a Second Bag and add it to the Main Bag creating a Third Bag. ***  " << endl;
            
            cout << "First we will create a second binary tree bag that will be then added to the first. " << endl;
            int number_of_ints_two = 0;
            cout << "How many Ints would you like to place in the second bag." << endl;
            cin >> number_of_ints_two;
            while (number_of_ints_two == 0)
            {
                cout << "Please enter a valid Int" << endl;
                cin >> number_of_ints_two;
            }
            int remaing_loop_two = number_of_ints_two;
            for (int i =0; i < number_of_ints_two; i ++)
            {
                cout << "There are still " << remaing_loop_two << " Ints to add to the second bag. " << endl;
                int user_submitted_int;
                cout << "Please enter an Int to be added to the second bag. " << endl;
                cin >> user_submitted_int;
                Temp_Second_Bag_Two.insert(user_submitted_int);
                user_submitted_int =0;
                remaing_loop_two --;
            }
            cout << "Now that the second bag has been created it will be added to the Main bag, creating a third bag. " << endl;
            
            cout << "The amount of Int items in the Third bag is now: " << Main_Bag.size() << endl;
            cout << "This bag can be accessed at any time unless a new third bag is created." << endl;
            
            user_inputed_selection = 0;
            tree_three_created = true;

        }
        if (user_inputed_selection == 6)
        {
            cout << endl << " *** Print the Occurences of an Int ***  " << endl;
            int User_Inputed_Int_Three = 0;
            cout << "Please Enter an Interger Value: " << endl;
            cin >> User_Inputed_Int_Three;
            while (User_Inputed_Int_Three == 0)
            {
                cin.clear();
                cout << "Please Enter a Valid Int: " << endl;
                cin >> User_Inputed_Int_Three;
            }
            
            cout << "The amount of " << User_Inputed_Int_Three << "'s in the bag are: " << Main_Bag.count(User_Inputed_Int_Three) << "." << endl;
            user_inputed_selection = 0;
            User_Inputed_Int_Three = 0;
            
        }
        
        if (user_inputed_selection == 7)
        {
            cout << endl << " *** Print the Binary Search Tree of Your choice ***  " << endl;
            int user_inputed_selection_print = 0;
            cout << "1.) Main Binary Search Tree" << endl;
            cout << "2.) Second Binary Search Tree. " << endl;
            cout << "3.) Third Binary Search Tree. " << endl;
            cin >> user_inputed_selection_print;
            while (user_inputed_selection_print <= 0 or user_inputed_selection_print > 3)
            {
                cout << "Please enter a number between 1 and 3." << endl;
                cin >> user_inputed_selection_print;
            }
            if (user_inputed_selection_print == 1)
            {
                cout << "The Main Bianary Serach Tree Contains: " <<endl;
                
            }
            if (user_inputed_selection_print == 2)
            {
                if (tree_two_created == true)
                {
                cout << "The Main Bianary Serach Tree Contains: " <<endl;
                    
                }else{
                    cout << "The Second Tree Has Not Been Created Yet."  << endl;
                }
            }
            if (user_inputed_selection_print == 3)
            {
                if (tree_two_created == true)
                {
                    cout << "The Main Bianary Serach Tree Contains: " <<endl;
                    
                }else{
                    cout << "The Second Tree Has Not Been Created Yet."  << endl;
                }
            }
            user_inputed_selection_print = 0;
            user_inputed_selection = 0;
        }
        
        if (user_inputed_selection == 8)
        {
            cout << "Thank you for useing the Binary Tree Application" << endl;
            application_loop = true;
        }
        
    }
};

