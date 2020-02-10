#include <iostream>

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
    };

    int getMonth()  { return mMonth;}
    int getDay()    { return mDay;}
    int getYear()   { return mYear;}
    int getHeight() { return mHeight;}
    int getWeight() { return mWeight;}
    std::string setGender()     {return mGender;}
    std::string setFirstName()  {return mFirstName;}
    std::string setLastName()   {return mLastName;}
    
    void setMonth(int month){
        if (1 <= month && month <= 12){mMonth = month;}
    }
    
    void setDay(int day){mDay = day;}
    void setYear(int year){mYear = year;}
    void setGender(std::string gender){mGender = gender;}
    void setHeight(int height){mHeight = height;}
    void setWeight(int weight){mWeight = weight;}
    void setFirstName(std::string firstName){mFirstName = firstName;}
    void setLastName(std::string lastName){mLastName = lastName;}

int main(){
    return 0;
}

