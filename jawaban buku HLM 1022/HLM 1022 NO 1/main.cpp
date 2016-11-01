#include <iostream>
#include <cstdlib>

using namespace std;

class Date
{
    int month;
    int day;
    int year;
public:
    Date();
    int getMonth();
    int getDay();
    int getYear();
    void setMonth(int month)
    {
        if (month <= 0 || month >= 13)
        {
            string e = "Error month\n";
            throw e;
            this-> month = month;
        }
    }
    void setDay(int day)
    {
        if (day <= 0 || day > 31)
        {
            string e = "Error day\n";
            throw e;
        }
        this->day = day;
    }
    void setYear(int year)
    {
        this->year = year;
    }
};

Date::Date()
{
    day = 25;
    month = 12;
    year = 2014;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}

int main()
{
    string monthArr [12] = {"January", "February" , "March", "April",
                            "May", "June", "July", "August", "September",
                            "October", "November", "December"};

    int d, m, y;

    cout << "Input the date dd/mm/yyyy" << endl;
    cin >> d >> m >> y;

   Date today;
   today.setYear(y);
   try
   {
       today.setMonth(m);
       today.setDay(d);
       cout << "-DATE-" << endl;
       cout << today.getDay() << "/" << today.getMonth() << "/" << today.getYear() << endl;
       cout << monthArr[today.getMonth()-1] << " " << today.getDay() << ", " << today.getYear() << endl;
       cout << today.getDay() << " " << monthArr[today.getMonth()-1] << " " << today.getYear() << endl;
   }
   catch(string e)
   {
       cout << e;
   }
   catch(string e)
   {
       cout << e;
   }




    return 0;
}
