//Objective:  money
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>

using namespace std;

#include <cmath>
 
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
  double years; //how many years you can live
  double deposit; //how much you want to put in your bank account.
  double interestrate; //annual rate 
  double money; //money you can get at last.
  double time; //total time

  years=30;
  deposit=100;
  interestrate=0.13;



  // introduction
  cout << "Objective: money.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  interestrate=interestrate/12;
  time=years*12;
  money=deposit*((pow(1+interestrate,time)-1)/interestrate);
  interestrate=interestrate*12;
  
//output

  cout <<"In "<< years <<" years, if you save $ " << deposit <<" every month with " << interestrate <<" annul rate , you can have $ " ;
  cout.setf(ios::fixed|ios::showpoint);
  cout <<setprecision(2);
  cout << money <<" at the end of your life." << endl;
  cout <<"------You do this!------" ;
  
}//main
