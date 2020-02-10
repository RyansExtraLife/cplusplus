/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
using namespace std;

class ProblemEightEight{
    
    public:
    void problemA (){
        using namespace std;
        
        //Declared array of int called values with five values, elements initalized as 2,4,6,8,10
        unsigned int values[5] {2,4,6,8,10};
        cout << "Verifying that each array type is set to the correct value: " << endl;
        cout << "Array Value 1: " << values[0] << endl;  //Value 1.
        cout << "Array Value 2: " << values[1] << endl;  //Value 2.
        cout << "Array Value 3: " << values[2] << endl;  //Value 3.
        cout << "Array Value 4: " << values[3] << endl;  //Value 4.
        cout << "Array Value 5: " << values[4] << endl;  //Value 5.
        
        cout << endl << endl;
        
        // Declared vPtr pointing at unsigned int.
        unsigned int *vPtr; 
    
        // For statement that will loop 5 times.
        for(int a=0; a<5;a++){
            //Prints values of the array that are equal to for loop. (Using one interger = %d)
            printf("%d", values[a]);
        }
        cout << endl << endl;

        //Two separate statements that assign the starting address of array values to pointer variable vPtr.
        vPtr = values;
        vPtr = &values[0];
    
        // For loop that will loop 5 times.
        for(int b=0; b < 5;b++){
            //Prints the values using a pointer/offset notation.
            printf( "%d", *(vPtr + b)); 
        }
        cout << endl << endl;
        
        // For loop that will loopo 5 times
        for(int c=0; c < 5; c++){
            //Prints the values using a pointer/offest notation utilizing array name.
            printf("%d", *(values +c));
        }
        cout << endl << endl;
        
        // For loop that will loop 5 times
        for( int d =0; d < 5; d++) {
            // Prints out using Vptr by subscripting the array.
            printf("%d", vPtr[d]);
        }
        cout << endl << endl;
    
       // H) Refer to the fifth element of values using array subscript notation, pointer/offset notation with the array name as the pointer, pointer subscript notation and pointer/offset notation.
    
       // Annswer : values[ 4 ], *( values + 4 ), vPtr[ 4 ], *( vPtr + 4 )
    
       // I) What address is referenced by vPtr + 3? What value is stored at that location?
    
       // Answer: Address =  1002506 Value = 8.
    
       // j) Assuming that vPtr points to values[ 4 ], what address is referenced by vPtr -= 4?  And, what value is stored at that location?
        
       // Answer: Address =  1002500 Value = 2.
    }
};

class ProblemEightNine{
    public:
    void problemA (){
        long value1;
        long *longPtr;
        longPtr = &value1;
        
        std::cout << std::endl << std::endl << "****Problem 8.9****" <<  std::endl << std::endl << "Value of longPtr: " << longPtr << std::endl << std::endl;
        
        long value2;
        value2 = *longPtr;

        std::cout << "Print out of parts E, F, and G." << std::endl;
        std::cout << "Value of Value 2:         " << value2 << std:: endl;            // E.) Print the address of value 2
        std::cout << "Address of Value 1:       " << &value1 << std:: endl;           // F.) Print the address of value 1
        std::cout << "Address of Value longPtr: " << longPtr << std:: endl;           // G.) Print the address of long Ptr
    }
};

class ProblemEightEleven{

    public:
    void questionA(){
        int realNumber;
        // This just initializes a pointer. It did not actually have a number to point to.
        int *number = nullptr;
        *number = 99;
        number = &realNumber;
        cout << realNumber << endl;
    }
    
    void questionB(){
        // The data type needed to be assinged a value for the equasion to work.
        double *realPtr = nullptr;
        double *integerPtr;
        // The two values were assigned differnt data types so they could not share data.
        integerPtr = realPtr; 
    }
    
    void QuestionC(){
        int * x, y;
        // Insert the '&' before the 'y'. This would make 'x' equal to the address variable of 'y'.
        x = &y;     
    }
    
    void QuestoinD(){
        char s[] = "this is a character array";
        // 's' is not a value but a pointer to the value of s, had to add *.
        for ( ; *s != '\0'; ++*s){
            cout << *s << "  ";
        }
    }
    
    void QuestionE(){
        short *numPtr = nullptr, result;
        short *genericPtr = numPtr;
        result = *genericPtr + 7;
    }
    
    void QuestionF(){
        double x = 19.34;
        double *xPtr = &x; // The unit was declared as a xPtr but the '*' was not included
        std::cout << xPtr << std::endl;
    }
};

int main(){
    ProblemEightEight problemOne;
    problemOne.problemA();
    
    ProblemEightNine runscript;
    runscript.problemA();
}

