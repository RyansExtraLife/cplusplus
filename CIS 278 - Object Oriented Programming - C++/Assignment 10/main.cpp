/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>

using namespace std;

class A10_1{
    public:
    void BMICalculator(){
        cout << "This program is used to calculate the user's B.M.I. \n" <<endl;
        cout << "Please enter your weight in pounds: \n";
     
        double bodyMass;
        cin >> bodyMass;
        
        cout << "You entered " << bodyMass << " pounds. Now please enter your height in inches: \n";
        
        double bodyHeight;
        cin >> bodyHeight;
            
        cout << "\nYou entered that you are " << bodyMass << " pounds and you are " << bodyHeight << " inchs tall.\n" <<endl;
        cout << "To Calculate BMI one must use the formula BMI = Weight (kg) / Hieght (m) ^2.\n " << endl;
        cout << "The next few steps are automated, but explained to insure that you are aware of the process that is taking place. \n" <<endl;
        
        double bodyWeightKilo;
        bodyWeightKilo = bodyMass / 2.2046;
            
        cout << "To first get Kilograms one must take weight in pounds and divide it by 2.2046. \n";
        cout << "Your Body weight was " << bodyMass << " pounds, which divided by 2.2046 equals " << bodyWeightKilo << " kilograms." << endl << endl;
            
        double bodyHeightMeters;
        bodyHeightMeters = bodyHeight / 39.370;
            
        cout << "Now to convert your height in inches to meters, you must take inches and divide it by 39.37.\n";
        cout << "Your body height in meters is " << bodyHeight << " divided by 39.370 which equals " << bodyHeightMeters <<" meters." << endl <<endl;
            
        cout << "Now that we have your heigh in meters (" << bodyHeightMeters << ") and your mass in kilograms (" << bodyWeightKilo << "), we can plug it into the previous formula.\n" << endl;
            
        double bodyheightMetersSquared;
        bodyheightMetersSquared = bodyHeightMeters * bodyHeightMeters;
            
        double bmi;
        bmi = bodyWeightKilo / bodyheightMetersSquared;
            
        cout << "Plugging in the numbers we come to the conclusion that your Body Mass Index is " << bmi << " % \n"; 
    }
};


int main ()
{
    A10_1 calculationOne;
    calculationOne.BMICalculator();
    
    return 0;
}

/*
 This program is used to calculate the user's B.M.I.
 
 Please enter your weight in pounds:
 210
 You entered 210 pounds. Now please enter your height in inches:
 72
 
 You entered that you are 210 pounds and you are 72 inchs tall.
 
 To Calculate BMI one must use the formula BMI = Weight (kg) / Hieght (m) ^2.
 
 The next few steps are automated, but explained to insure that you are aware of the process that is taking place.
 
 To first get Kilograms one must take weight in pounds and divide it by 2.2046.
 Your Body weight was 210 pounds, which divided by 2.2046 equals 95.2554 kilograms.
 
 Now to convert your height in inches to meters, you must take inches and divide it by 39.37.
 Your body height in meters is 72 divided by 39.370 which equals 1.8288 meters.
 
 Now that we have your heigh in meters (1.8288) and your mass in kilograms (95.2554), we can plug it into the previous formula.
 
 Plugging in the numbers we come to the conclusion that your Body Mass Index is 28.481 %
 */

