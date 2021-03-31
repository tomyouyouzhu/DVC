//Objective:  mortgageCalculator
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <cmath>
#include <iomanip> 
#include <iostream>
using namespace std;

struct mortgage
{ 
  double amount; 
  double rate; 
  int years; 
  double monthpay;
}; // mortgage

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information
void output(mortgage& a);
//main program
mortgage getinformation()
{
  int pw=1631445; //password
  mortgage result;
do
{
  cout <<"Please input your password, the password is my student Id number : ";
  cin >> pw;
}while (pw!=1631445);
  if (pw==1631445)
  {
    cout <<"Please input the amount of your loan: ";
    cin >> result.amount ;
    cin.ignore(1000, 10);
    cout <<"Please input the rate of your loan: ";
    cin >> result.rate ;
    cin.ignore(1000, 10);
    result.monthpay=(result.amount*pow(1+(result.rate/1200),360)*(result.rate/1200))/(pow(1+(result.rate/1200),360)-1);
    return result;
  }
}

int main()
{
  //Data
  string objective = "mortgageCalculator"; // program objective
  introduction(objective); //user information
  mortgage a= getinformation();
  output(a);
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: mortgageCalculator ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction


void output(mortgage& a)
{
  cout <<"Amount borrowed: $ " <<a.amount<< endl;
  cout <<"Annual interest rat is: " <<a.rate<<" %."<<endl;
  cout <<"Payback period = 30 years."<< endl;
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2);
  cout <<"Monthly payment: $ " << a.monthpay << endl;
}
  

