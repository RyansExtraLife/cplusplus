/*
 Main written by Ryan Patterson
 Class CIS 278
*/

#include <iostream>
#include <sstream>
#include <string>

class theDate{
    private:
    int mMonth;
    int mDate;
    int mYear;

    public:
    theDate(int month,int date, int year){
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
        if(1 <= month && month <= 12){
            mMonth = month;
        }
    }

    void setDate(int date){mDate = date;} 
    void setYear(int year) {mYear = year;}

    std::string toString(){
        std::ostringstream oss;
        oss << mMonth << "/" << mDate << "/" << mYear;
        return oss.str();
    }

    void displayDate(){std::cout << toString() << std::endl;}
};


int main (){
    theDate date1(2, 2, 2002);
    std::cout << date1.toString() << std::endl;
    
    theDate date2(8, 8, 2012);
    std::cout << date2.toString() << std::endl;
    
    theDate date3(6, 12, 2045);
    std::cout << date3.toString() << std::endl;
    
    theDate date4(4, 4, 1986);
    std::cout << date4.toString() << std::endl;
    
    return 0;
}