#include <string>
#ifndef HEARTRATES_H
#define HEARTRATES_H
using namespace std;

class HeartRates
{

private:
   std::string firstName; // user's first name
   std::string lastName; // user's last name
   int birthMonth; // user's birth month
   int birthDay; // user's birth day
   int birthYear; // user's birth year
   int currentMonth; // current month
   int currentDay; // current day
   int currentYear; // current year
   
public:
   int ages;
   HeartRates(string a, string b, int c, int d, int e);
   void getAge();
   int getMaxiumHeartRate();
   string getTargetHeartRate();
   void setFirstName(string);
   string getFirstName() const;
   void setLastName(string);
   string getLastName() const;
   void setBirthMonth(int);
   int getBirthMonth() const;
   void setBirthDay(int);
   int getBirthDay() const;
   void setBirthYear(int);
   int getBirthYear() const;
}; 

#endif
