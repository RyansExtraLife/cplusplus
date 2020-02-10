/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <cmath>

// Problem 4.30
class RadiusToDiameter{
    public:
    void RadiusEquation(){
        using namespace std;
        
        cout << "The following program is designed to calcualte the diameter, the circumfrence, and the area of a cirlce." << endl;
        double circleRadius; 
        cout << "Please enter the raidus of a circle to dertine the approiate values: " <<endl;
        cin >> circleRadius;
                
        double circleDiameter;
        double circleCircumfrence;
        double circleArea;
                
        circleDiameter = 2 * circleRadius;
        circleCircumfrence = 2 * 3.14159 * circleRadius;
        circleArea = circleRadius * circleRadius * 3.14159;
                
        cout << " *** Demnisons of a Circle ***  " << endl;
        cout << "Diameter of the Circle: " << circleDiameter << endl;
        cout << "Circumfrence of the Circle: " << circleCircumfrence << endl;
        cout << "Area of the Circle: " << circleArea<< endl << endl;           
    }
};

// Problem 4.33
class ThreeSidesofARightTriangle{
    public:
    void calculateRightTriangleWithSides(){
        using namespace std;
        cout << "The following program determins it the three sides given are part of a right triangle.";
        double lengthSideOne;
        double lengthSideTwo;
        double lengthSideThree;
                    
        cout << "Please enter the first side: " << endl;
        cin >> lengthSideOne;
                    
        cout << "Please enter the second side: " <<endl;
        cin >> lengthSideTwo;
                    
        cout << "Please enter the thrid side: " <<endl;
        cin >> lengthSideThree;
                    
        double sqrtSideOne;
        double sqrtSideTwo;
        double sqrtSideThree;
                    
        sqrtSideOne = sqrt(lengthSideOne);
        sqrtSideTwo = sqrt(lengthSideTwo);
        sqrtSideThree = sqrt(lengthSideThree);
                    
        if (sqrtSideOne + sqrtSideTwo == sqrtSideThree || sqrtSideTwo + sqrtSideThree == sqrtSideOne || sqrtSideThree + sqrtSideOne == sqrtSideTwo){
            cout << " This is a right trianlge";}else{ cout << "This is not a right triangle";};
        }
};


class ThreeAnglesOfARightTriangle{
    public:
    void caluclateRightTrianglewithAngles(){
        using namespace std;
        
        cout << "The following program determins it the three agnles given are part of a right triangle." <<endl;
        double sideOne;
        double sideTwo;
        double sideThree;
                
        cout << "Please enter the first angle: " << endl;
        cin >> sideOne;
                
        cout << "Please enter the second angle: " <<endl;
        cin >> sideTwo;
                
        cout << "Please enter the thrid angle: " <<endl;
        cin >> sideThree;
                
        // All Triangles have the sum of there angles at 180
        if (sideOne + sideTwo + sideThree == 180){
            if (sideOne || sideTwo || sideThree == 90){
                cout << " The numbers " << sideOne << ", " << sideTwo << " and " << sideThree << " are given agnles of a right triangle" << endl;
            }else{
                cout << "The three demnsions are not the sides of a right triangle" << endl;
        }else{
            cout << "The three demnsions are not angles of a right triangle." << endl;
        }
    }
};

// Problem 4.34
class PositiveNumberFactorial{
    public:
            void factorial()
                {
                    using namespace std;
                    
                    cout << "The program is designed to take the input of a postive, whole number and give the users the factorial of it. " << endl;
                    
                    double userInputedNumber;
                    double factorialAnswer = 1.0;
                    cout << "Please enter a positve, whole number: " << endl;
                    cin >> userInputedNumber;
                    

                    while (userInputedNumber >=1)
                    {
                        factorialAnswer =  factorialAnswer * userInputedNumber;
                        userInputedNumber --;
                    }
                    
                    cout << "The Factorial of the number is:" << factorialAnswer << endl;
                    
                }
        
    };

// Problem 4.35

class DataEncryption
{
    public:
    void encryptingData(){
        using namespace std;
        
        int userEncryptionNumber;
        cout << "Please enter the four digit number you would like to encrypt: " <<endl;
        
        cin >> userEncryptionNumber;
        
        double numberOne;
        double numberTwo;
        double numberThree;
        double numberFour;

        numberFour = userEncryptionNumber % 10;
        numberThree = userEncryptionNumber / 10 % 10;
        numberTwo =  userEncryptionNumber / 100 % 10;
        numberOne =  userEncryptionNumber/ 1000 % 10;
        
        cout << " ** Phase One Encryption (X+7) **" <<endl <<endl;
        double phaseOneNumberOne;
        phaseOneNumberOne = numberOne + 7;
        
        cout << "Number 1 is now equal to :" << phaseOneNumberOne << endl;
        double phaseOneNumberTwo;
        phaseOneNumberTwo = numberTwo + 7;
        
        cout << "Number 2 is now equal to :" << phaseOneNumberTwo << endl;
        double phaseOneNumberThree;
        phaseOneNumberThree = numberThree + 7;
        
        cout << "Number 3 is now equal to :" << phaseOneNumberThree << endl;
        double phaseOneNumberFour;
        phaseOneNumberFour = numberFour + 7;
        
        cout<< "Number 4 is now equal to :" <<phaseOneNumberFour <<endl <<endl << endl;
        cout << " ** Phase Two Encryption (X / 10) **" << endl <<endl;
        
        double phaseTwoNumberOne;
        phaseTwoNumberOne = phaseOneNumberOne /10;
        
        cout << "Number 1 is now equal to :" << phaseTwoNumberOne << endl;
        double phaseTwoNumberTwo;
        phaseTwoNumberTwo = phaseOneNumberTwo /10;
        
        cout << "Number 2 is now equal to :" << phaseTwoNumberTwo << endl;
        double phaseTwoNumberThree;
        phaseTwoNumberThree = phaseOneNumberThree /10;
        
        cout << "Number 3 is now equal to :" << phaseTwoNumberThree << endl;
        double phaseTwoNumberFour;
        phaseTwoNumberFour = phaseOneNumberFour /10;
        
        cout << "Number 4 is now equal to :" << phaseTwoNumberFour << endl <<endl << endl;
        double phaseThreeNumberOnePartOne;
        double phaseThreeNumberTwoPartOne;
        double phaseThreeNumberThreePartOne;
        double phaseThreeNumberFourPartOne;

        cout << " ** Phase Three Encryption (Number Swap) ** " << endl << endl; 
        phaseThreeNumberOnePartOne = phaseTwoNumberThree;
        phaseThreeNumberTwoPartOne = phaseTwoNumberFour;
        phaseThreeNumberThreePartOne = phaseTwoNumberOne;
        phaseThreeNumberFourPartOne = phaseTwoNumberTwo;
        
        cout << "Number 1 is now equal to :" << phaseThreeNumberOnePartOne << endl;
        cout << "Number 2 is now equal to :" << phaseThreeNumberTwoPartOne << endl;
        cout << "Number 3 is now equal to :" << phaseThreeNumberThreePartOne << endl;
        cout << "Number 4 is now equal to :" << phaseThreeNumberFourPartOne << endl << endl <<endl;
        
        cout << " ** Data Encryption Complete ** " << endl << endl; 
        cout << "Encrypted Number: " << phaseThreeNumberOnePartOne << ":" << phaseThreeNumberTwoPartOne << ":" <<phaseThreeNumberThreePartOne << ":" << phaseThreeNumberFourPartOne << endl;
    }
};


class DataDectryption{
    public: 
    void decryptionData(){
        using namespace std;
        
        cout << "This Program takes the for seperate numbers from an encrypted file from Question 35 in chapter 4" <<endl;
        double enteredNumberOne;
        double enteredNumberTwo;
        double enteredNumberThree;
        double enteredNumberFour;
        
        cout << "Enter the first number: "<< endl;
        cin >> enteredNumberOne;
        
        cout << "Enter the second number: "<< endl;
        cin >> enteredNumberTwo;
        
        cout << "Enter the second number: "<< endl;
        cin >> enteredNumberThree;
        
        cout << "Enter the second number: "<< endl;
        cin >> enteredNumberFour;
        
        cout << endl << " ** Phase one of Decryption (Number Swap) ** " << endl << endl;
        double decryptionLevelOneNumberOne;
        double decryptionLevelOneNumberTwo;
        double decryptionLevelOneNumberThree;
        double decryptionLevelOneNumberFour;
        
        decryptionLevelOneNumberOne = enteredNumberThree;
        decryptionLevelOneNumberTwo = enteredNumberFour;
        decryptionLevelOneNumberThree = enteredNumberOne;
        decryptionLevelOneNumberFour = enteredNumberTwo;
        
        cout << "Number 1 is now equal to :" <<decryptionLevelOneNumberOne <<endl;
        cout << "Number 2 is now equal to :" <<decryptionLevelOneNumberTwo <<endl;
        cout << "Number 3 is now equal to :" <<decryptionLevelOneNumberThree <<endl;
        cout << "Number 4 is now equal to :" <<decryptionLevelOneNumberFour <<endl <<endl << endl;
        
        cout << " ** Phase two of Decryption (X * 10) ** " << endl << endl;
        double decryptionLevelTwoNumberOne;
        double decryptionLevelTwoNumberTwo;
        double decryptionLevelTwoNumberThree;
        double decryptionLevelTwoNumberFour;
        
        decryptionLevelTwoNumberOne = decryptionLevelOneNumberOne * 10;
        decryptionLevelTwoNumberTwo = decryptionLevelOneNumberTwo * 10; 
        decryptionLevelTwoNumberThree = decryptionLevelOneNumberThree * 10;
        decryptionLevelTwoNumberFour = decryptionLevelOneNumberFour * 10;
        
        cout << "Number 1 is now equal to :" << decryptionLevelTwoNumberOne <<endl;
        cout << "Number 2 is now equal to :" << decryptionLevelTwoNumberTwo <<endl;
        cout << "Number 3 is now equal to :" << decryptionLevelTwoNumberThree <<endl;
        cout << "Number 4 is now equal to :" << decryptionLevelTwoNumberFour <<endl <<endl << endl;
        
        cout << " ** Phase 3 of Decryption (X -7) ** " << endl << endl;
        double decryptionLevelThreeNumberOne;
        double decryptionLevelThreeNumberTwo;
        double decryptionLevelThreeNumberThree;
        double decryptionLevelThreeNumberFour;
        
        decryptionLevelThreeNumberOne = decryptionLevelTwoNumberOne -7;
        decryptionLevelThreeNumberTwo = decryptionLevelTwoNumberTwo -7;
        decryptionLevelThreeNumberThree = decryptionLevelTwoNumberThree -7;
        decryptionLevelThreeNumberFour = decryptionLevelTwoNumberFour -7;
        
        cout << "Number 1 is now equal to :" << decryptionLevelThreeNumberOne <<endl;
        cout << "Number 2 is now equal to :" << decryptionLevelThreeNumberTwo <<endl;
        cout << "Number 3 is now equal to :" << decryptionLevelThreeNumberThree <<endl;
        cout << "Number 4 is now equal to :" << decryptionLevelThreeNumberFour <<endl <<endl << endl;
        
        cout << " ** Decryption Complete (Adding Numbers Togehter) ** " << endl << endl;
        double finalNumberOne;
        double finalNumberTwo;
        double finalNumberThree;
        double finalNumberFour;
        

        finalNumberFour = decryptionLevelThreeNumberFour;
        finalNumberThree = decryptionLevelThreeNumberThree * 10 ;
        finalNumberTwo =  decryptionLevelThreeNumberTwo * 100 ;
        finalNumberOne =  decryptionLevelThreeNumberOne * 1000 ;
        
        double unencryptedNumber;
        unencryptedNumber = finalNumberFour + finalNumberThree + finalNumberTwo + finalNumberOne;
        cout << " The unecrypted Number is: " << unencryptedNumber <<endl;
    }
};
            
int main(){
    RadiusToDiameter Q4_30;
    Q4_30.RadiusEquation();
    
    ThreeAnglesOfARightTriangle Q4_33;
    Q4_33.caluclateRightTrianglewithAngles();
    
    ThreeSidesofARightTriangle Q4_34;
    Q4_34.calculateRightTriangleWithSides();
                
    PositiveNumberFactorial Q4_34_A;
    Q4_34_A.factorial();
    
    DataEncryption Q4_35;
    Q4_35.encryptingData(); 
    
    DataDectryption Q4_35B;
    Q4_35B.decryptionData();
    
    return 0;
};

/*
 The following program is designed to calcualte the diameter, the circumfrence, and the area of a cirlce.
 Please enter the raidus of a circle to dertine the approiate values:
 5
 *** Demnisons of a Circle ***
 Diameter of the Circle: 10
 Circumfrence of the Circle: 31.4159
 Area of the Circle: 78.5397
 
 The following program determins it the three agnles given are part of a right triangle.
 Please enter the first angle:
 45
 Please enter the second angle:
 45
 Please enter the thrid angle:
 90
 The numbers 45, 45 and 90 are given agnles of a right triangle

 The following program determins it the three sides given are part of a right triangle.Please enter the first side:
 3
 Please enter the second side:
 4
 Please enter the thrid side:
 5
 This is a right trianlge
 
 The program is designed to take the input of a postive, whole number and give the users the factorial of it.
 Please enter a positve, whole number:
 3
 The Factorial of the number is:6
 
 
 
 Please enter the four digit number you would like to encrypt:
 1234
 ** Phase One Encryption (X+7) **
 
 Number 1 is now equal to :8
 Number 2 is now equal to :9
 Number 3 is now equal to :10
 Number 4 is now equal to :11
 
 
 ** Phase Two Encryption (X / 10) **
 
 Number 1 is now equal to :0.8
 Number 2 is now equal to :0.9
 Number 3 is now equal to :1
 Number 4 is now equal to :1.1
 
 
 ** Phase Three Encryption (Number Swap) **
 
 Number 1 is now equal to :1
 Number 2 is now equal to :1.1
 Number 3 is now equal to :0.8
 Number 4 is now equal to :0.9
 
 
 ** Data Encryption Complete **
 
 Encrypted Number: 1:1.1:0.8:0.9
 This Program takes the for seperate numbers from an encrypted file from Question 35 in chapter 4
 Enter the first number:
 1
 Enter the second number:
 1.1
 Enter the second number:
 .8
 Enter the second number:
 .9
 
 ** Phase one of Decryption (Number Swap) **
 
 Number 1 is now equal to :0.8
 Number 2 is now equal to :0.9
 Number 3 is now equal to :1
 Number 4 is now equal to :1.1
 
 
 ** Phase two of Decryption (X * 10) **
 
 Number 1 is now equal to :8
 Number 2 is now equal to :9
 Number 3 is now equal to :10
 Number 4 is now equal to :11
 
 
 ** Phase 3 of Decryption (X -7) **
 
 Number 1 is now equal to :1
 Number 2 is now equal to :2
 Number 3 is now equal to :3
 Number 4 is now equal to :4
 
 
 ** Decryption Complete (Adding Numbers Togehter) **
 
 The unecrypted Number is: 1234
*/