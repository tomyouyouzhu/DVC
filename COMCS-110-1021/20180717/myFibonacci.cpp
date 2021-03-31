//Objective:  template for C++ programs and to test code
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

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
void introduction(string obj); //user information
void calculate (int x, int a, int b, int count)
{
  int c;
  c=a+b;
  a=b;
  b=c;
  count++;
  if (count<x)
  {
    cout<<c<<' ';
    calculate (x, a, b, count);
  }
  if (count==x)
  {
    cout<<"The Fibonacci number at index "<<x<<" is "<<a;
  }
}
  

//main program
int main()
{
  //Data
  int n;//user input number
  string objective = "template for C++ programs and to test code"; // program objective
  introduction(objective); //user information
  cout<<"Please input a number [0 or greater]: ";
  cin>>n;
  cin.ignore(1000,10);
  if (n==0)
  {
    cout <<" 0 "<<endl;
    cout <<"The Fibonacci number at index 0 is 0."<<endl;
  }
  if (n==1)
  {
    cout <<" 0 1 "<<endl;
    cout <<"The Fibonacci number at index 0 is 1."<<endl;
  }
  if (n>1)
  {
    cout<<" 0 1 ";
    calculate(n, 0, 1, 0);
  }
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: This program will ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

