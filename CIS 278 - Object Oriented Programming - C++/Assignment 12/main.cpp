/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <sstream>
#include <string>

/* This is homework that allows the use of 'getters', 'setters' and construtors.
 * Author: Ryan Patterson
 * Date: 9/10/13
 */

class theDate{
    private:
    int mMonth;
    int mDate;
    int mYear;
        
    public:
    theDate(int month ,int date, int year){
        mMonth = 1;
        mDate =  1;
        mYear =  2000;
        
        setMonth(month);
        setDate(date);
        setYear(year);
    };
        
    int getMonth(){return mMonth;}
    int getDate(){return mDate;}
    int getYear(){return mYear;}
    
    void setMonth(int month){
        if (1 <= month && month <= 12){
            mMonth = month;
        }
    }
        
    void setDate(int date){mDate = date;}
    void setYear(int year){mYear = year;}
   
    std::string toString(){
        std::ostringstream oss;
        oss << mMonth << "/" << mDate << "/" << mYear;
        return oss.str();
    }
        
    void displayDate(){
        std::cout << toString() << std::endl;
    }
};

class theHeartRate
{
private:
    int mDay;
    int mMonth;
    int mYear;
    std::string mFirstName;
    std::string mLastName;
    
public:
    
    theHeartRate(std::string firstName, std::string lastName, int month, int day, int year){
        mFirstName = '0';
        mLastName ='0';
        mDay    =1;
        mMonth  =1;
        mYear   =1900;
        
        setDay(day);
        setMonth(month);
        setYear(year);
        setFirstName(firstName);
        setLastName(lastName);
    };
    
    int getMonth(){return mMonth;}
    int getDay(){return mDay;}
    int getYear(){return mYear;}
    std::string getFirstName(){return mFirstName;}
    std::string getLastName(){return mLastName;}
    std::string inputedFirstName;
    std::string inputedLastName;
    
    void setFirstName(std::string firstName){mFirstName = firstName;}
    void setLastName(std::string lastName){mLastName = lastName;}
    void setDay(int day){mDay = day;}
    void setMonth(int month){
        if (1 <= month && month <= 12){
            mMonth = month;
        }
    }
    void setYear(int year){mYear = year;}  
    void userInputedinformation(){};
};

class healthRecords
    {
    private:
    int mDay;
    int mMonth;
    int mYear;
    int mHeight;
    int mWeight;
    std::string mFirstName;
    std::string mLastName;
    std::string mGender;
        
    public:
    healthRecords(int day, int month, int year, int height, int weight, std::string firstName, std::string lastName, std::string gender){
        mDay =  1;
        mMonth = 1;
        mYear =  1900;
        mHeight = 0;
        mWeight = 0;
        mFirstName = 'X';
        mLastName = 'X';
        mGender = 'X';
            
        setMonth(month);
        setDay(day);
        setYear(year);
        setGender(gender);
        setHeight(height);
        setWeight(weight);
        setFirstName(firstName);
        setLastName(lastName);
    };

    int getMonth(){return mMonth;}
    int getDay(){return mDay;}
    int getYear(){return mYear;}
    int getHeight(){return mHeight;}
    int getWeight(){return mWeight;}
    std::string getGender(){return mGender;}
    std::string getFirstName(){return mFirstName;}
    std::string getLastName(){return mLastName;}
        
    void setMonth(int month){
        if (1 <= month && month <= 12){
            mMonth = month;
        }
    }
        
    void setDay(int day){mDay = day;}    
    void setYear(int year){mYear = year;}   
    void setGender(std::string gender){mGender = gender;}        
    void setHeight(int height){mHeight = height;}  
    void setWeight(int weight){mWeight = weight;} 
    void setFirstName(std::string firstName){mFirstName = firstName;}    
    void setLastName(std::string lastName){mLastName = lastName;}
};

int main (){
    std::cout << "The Following Dates are implamented using a C++ constructor" << std:: endl;
    
    theDate date1(2, 2, 2002);
    std::cout << date1.toString() << std::endl;
    
    theDate date2(8, 8, 2012);
    std::cout << date2.toString() << std::endl;
    
    theDate date3(6, 12, 2045);
    std::cout << date3.toString() << std::endl;
    
    theDate date4(4, 4, 1986);
    std::cout << date4.toString() << std::endl << std::endl;

    std::string inputedFirstName;
    std::cout << "The following program will gather information in order to construct a heart rate index for you." << std::endl;
    std::cout << "Enter your first name: ";
    std::cin >> inputedFirstName;
    
    std::string inputedLastName;
    std::cout << "Enter your Last name: ";
    std::cin >> inputedLastName;
    
    int inputedMonth;
    std::cout << "Enter the month number you where born in (Example June = '6') : ";
    std::cin >> inputedMonth;
    
    int inputedDay;
    std::cout << "Enter the day you where born on (Example 24): ";
    std::cin >> inputedDay;
    
    double inputedYear;
    std::cout << "Enter the year you where born in (Example 1986) : ";
    std::cin >> inputedYear;
    
    theHeartRate hr (inputedFirstName,inputedLastName,inputedMonth,inputedDay,inputedYear);

    std::cout << std::endl << "Personal Heart Rate Chart" << std::endl;
    std::cout << "First Name: " << hr.getFirstName() <<std::endl;
    std::cout << "Last Name: " << hr.getLastName() <<std::endl;
    std::cout << "Date of Birth: " << hr.getMonth() << "/" << hr.getDay() << "/" << hr.getYear() << std::endl;
    
    double currentAge;
    double currentMonth = 9;
    double currentDay =15;
    double currentYear =2013;
    
    currentAge = currentYear - hr.getYear();
    if (hr.getMonth() - currentMonth >= 0){
        if(hr.getDay() - currentDay >= 0){
            currentAge = currentAge - 1 ;
        }
    }
    
    std::cout << "Your Current Age: " << currentAge << std::endl;
    
    double targetHeartRate;
    targetHeartRate = 220 - currentAge;
    double minamumTargetHeartRate;
    double maximumTargetHeartRate;
    
    minamumTargetHeartRate = targetHeartRate * .50;
    maximumTargetHeartRate = targetHeartRate * .85;
    
    std::cout << std::endl << "** Heart Rate Guide **" << std::endl << "Your Target Heart Rate is Between " << minamumTargetHeartRate << " and " << maximumTargetHeartRate << std::endl;
    std::cout << "Your Maximum Target Heart Rate: " << targetHeartRate << std::endl << std::endl;
    
    double healthRecordsDay; 
    double healthRecordsMonth;
    double healthRecordsYear;
    double healthRecordsHeight;
    double healthRecordsWeight;
    std::string healthRecordsFirstName;
    std::string healthRecordsLastName;
    std::string healthRecordsGender;
    double healthRecordsCurrentDay;
    double healthRecordsCurrentMonth;
    double healthRecordsCurrentYear;
    
    std::cout << std::endl << std::endl << std::endl<< "***** Health Records *****" << std:: endl;
    std::cout << "The following program will ask you a few questions and relase to you a file that has some inportant health information on it" << std::endl;
    
    std::cout << "Enter your first name: " << std::endl;
    std::cin >> healthRecordsFirstName;
    
    std::cout << "Enter your last name: " << std::endl;
    std::cin >> healthRecordsLastName;
    
    std::cout << "Enter your gender (Male/Female): " << std::endl;
    std::cin >> healthRecordsGender;
   
    std::cout << "Enter your birth month (1-12): " << std::endl;
    std::cin >> healthRecordsMonth;
    
    std::cout << "Enter your birth day (1-31): " << std::endl;
    std::cin >> healthRecordsDay;
    
    std::cout << "Enter your birth year: " << std::endl;
    std::cin >> healthRecordsYear;
    
    std::cout << "Enter your height in inches: " << std::endl;
    std::cin >> healthRecordsHeight;
    
    std::cout << "Enter your weight in pounds: " << std::endl;
    std::cin >> healthRecordsWeight;
    
    healthRecords hrs (healthRecordsDay, healthRecordsMonth, healthRecordsYear, healthRecordsHeight,healthRecordsWeight,healthRecordsFirstName,healthRecordsLastName,healthRecordsGender);
    
    std::cout << std::endl << std::endl << "*****  " << hrs.getFirstName() << " " << hrs.getLastName() << "'s Health Profile  *****" << std::endl << std::endl;
    std::cout << "First Name: " << hrs.getFirstName() <<std::endl;
    std::cout << "Last Name: " << hrs.getLastName() <<std::endl;
    std::cout << "Gender: " << hrs.getGender() << std::endl;
    std::cout << "Date of Birth: " << hrs.getMonth() << "/" << hrs.getDay() << "/" << hrs.getYear() << std::endl;
    std::cout << "Current Height: " << hrs.getHeight() << std::endl;
    std::cout << "Current Weight: " << hrs.getWeight() << std::endl << std::endl;
    
    std::cout << "Enter the Current Month (1-12): " << std::endl;
    std::cin >> healthRecordsCurrentMonth;
    
    std::cout << "Enter the Current Day (1-31): " << std::endl;
    std::cin >> healthRecordsCurrentDay;
    
    std::cout << "Enter the Current Year: " << std::endl << std::endl;
    std::cin >> healthRecordsCurrentYear;
    
    double usersCurrentAge;
    usersCurrentAge = healthRecordsCurrentYear - hrs.getYear();
    if (hrs.getMonth() - healthRecordsCurrentMonth >= 0){
        if(hrs.getDay() - healthRecordsCurrentDay <= 0){
            usersCurrentAge = usersCurrentAge - 1 ;
        }
    }
    
    double usersMaxHeartRate;
    usersMaxHeartRate = 220-usersCurrentAge;
    
    double UsersMinamumTargetHeartRate;
    double UsersMaximumTargetHeartRate;

    UsersMinamumTargetHeartRate = targetHeartRate * .50;
    UsersMaximumTargetHeartRate = targetHeartRate * .85;
    
    std::cout << "Current Age: " << usersCurrentAge << std::endl;
    std::cout << "Max Heartrate in Beats Per Minute: " << usersMaxHeartRate << std::endl;
    std::cout << "Users Target Heart Rate is between " << UsersMinamumTargetHeartRate << "-" << UsersMaximumTargetHeartRate << std::endl;

    
    double bodyWeightKilo;
    bodyWeightKilo = hrs.getWeight() / 2.2046;
    
    double bodyHeightMeters;
    bodyHeightMeters = hrs.getHeight() / 39.370;
    
    double bodyHeightMetersSquared;
    bodyHeightMetersSquared = bodyHeightMeters * bodyHeightMeters;
    
    
    double bmi;
    bmi = bodyWeightKilo / bodyHeightMetersSquared;
    
    std::cout << "Current BMI: " << bmi << "%" << std::endl << std:: endl;
    
    std::cout << "BMI VALUES"<< std::endl;
    std::cout << "Underweight:    less than 18.5"<< std::endl;
    std::cout << "Normal:         between 18.5 and 24.9"<< std::endl;
    std::cout << "Overweight:     between 25 and 29.9"<< std::endl;
    std::cout << "Obese:          30 or greater"<< std::endl;
    
    return 0;
};

/*
 The Following Dates are implamented using a C++ constructor
 2/2/2002
 8/8/2012
 6/12/2045
 4/4/1986
 
 The following program will gather information in order to construct a heart rate index for you.
 Enter your first name: Ryan
 Enter your Last name: Patterson
 Enter the month number you where born in (Example June = '6') : 6
 Enter the day you where born on (Example 24): 5
 Enter the year you where born in (Example 1986) : 1986
 
 Personal Heart Rate Chart
 First Name: Ryan
 Last Name: Patterson
 Date of Birth: 6/5/1986
 Your Current Age: 27
 
 ** Heart Rate Guide **
 Your Target Heart Rate is Between 96.5 and 164.05
 Your Maximum Target Heart Rate: 193
 
 
 
 
 ***** Health Records *****
 The following program will ask you a few questions and relase to you a file that has some inportant health information on it
 Enter your first name:
 Ryan
 Enter your last name:
 Patterson
 Enter your gender (Male/Female):
 Male
 Enter your birth month (1-12):
 6
 Enter your birth day (1-31):
 4
 Enter your birth year:
 1986
 Enter your height in inches:
 72
 Enter your weight in pounds:
 210
 
 
 *****  Ryan Patterson's Health Profile  *****
 
 First Name: Ryan
 Last Name: Patterson
 Gender: Male
 Date of Birth: 6/4/1986
 Current Height: 72
 Current Weight: 210
 
 Enter the Current Month (1-12):
 9
 Enter the Current Day (1-31):
 15
 Enter the Current Year:
 
 2013
 Current Age: 27
 Max Heartrate in Beats Per Minute: 193
 Users Target Heart Rate is between 96.5-164.05
 Current BMI: 28.481%
 
 BMI VALUES
 Underweight:    less than 18.5
 Normal:         between 18.5 and 24.9
 Overweight:     between 25 and 29.9
 Obese:          30 or greater
 
 */
