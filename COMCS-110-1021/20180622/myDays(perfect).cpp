//Objective:  myDays
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: Xcode
//Editor: TextEdit

//libraries
#include <iostream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
    //Data
    int year;
    int month;
    int date;
    int sum;
    sum=174;
    
    
    // introduction
    cout << "Objective: myDays.\n";
    cout << "Programmer: Kunming Zhu\n";
    cout << "Editor(s) used: TextEdit\n";
    cout << "Compiler(s) used: Xcode\n";
    cout << "File: " << __FILE__ << endl;
    cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
    
    
    // ask to input year month and data.
    cout << "Hi, I can help you to calculate how many days old you are when the due day.please input your birth year, month and data with enter one by one by numbers." <<endl;
    
    cout << "Please input year:";
    cin >> year;
    if (year > 2017)
    {
        cout << "Sorry, your input is wrong. Please reinput:";
        cin >> year;
    }
    if (year < 1900)
    {
        cout << "Sorry, your input is wrong. Please reinput:";
        cin >> year;
    }
    cout << "please input month:";
    cin >> month;
    if (month > 12)
    {
        cout << "Sorry, your input is wrong. Please reinput:";
        cin >> month;
    }
    if (month < 1)
    {
        cout << "Sorry, your input is wrong. Please reinput:";
        cin >> month;
    }
    cout << "please input data:";
    cin >> date;
    if (date>31)
    {
        cout << "Sorry, your input is wrong. Please reinput:";
        cin >> date;
    }
    if (date<1)
    {
        cout << "Sorry, your input is wrong. Please reinput:";
        cin >> date;
    }
    
    
    sum=sum + (2017-year)*365;
    
    sum=sum + 2 + ((2017-year)/4);
    
    if (month==2)
    {
        sum=sum + 365-((month-1)*30+date+1);
    }
    if (month==3)
    {
        sum=sum + 365-((month-1)*30+date-1);
    }
    if (month==4)
    {
        sum=sum+365-((month-1)*30+date);
    }
    if (month==5)
    {
        sum=sum+365-((month-1)*30+date);
    }
    if (month==6)
    {
        sum=sum+365-((month-1)*30+date+1);
    }
    if (month==7)
    {
        sum=sum+365-((month-1)*30+date+1);
    }
    if (month==8)
    {
        sum=sum+365-((month-1)*30+date+2);
    }
    if (month==9)
    {
        sum=sum+365-((month-1)*30+date+3);
    }
    if (month==10)
    {
        sum=sum+365-((month-1)*30+date+3);
    }
    if (month==11)
    {
        sum=sum+365-((month-1)*30+date+4);
    }
    if (month==12)
    {
        sum=sum+365-((month-1)*30+date+4);
    }
    if (month==1)
    {
        sum=sum + 365 - date;
    }
    
    // output
    cout << "You are born at " << year << " " << month << " " << date << endl;
    cout << "The due day is 2018 6 24"<< endl;
    cout << "You are " << sum << " days old by the due day"<< endl;
}//main

