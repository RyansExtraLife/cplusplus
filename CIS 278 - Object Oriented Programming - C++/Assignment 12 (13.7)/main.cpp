/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <string>

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
        if (1 <= month && month <= 12){mMonth = month;}
    }
    void setYear(int year){mYear = year;}
    void userInputedinformation(){};
};

int main(){
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
    
    return 0;
};

