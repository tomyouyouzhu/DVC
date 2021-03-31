//Objective:  C2F
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#include <cmath>


//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information

//main program
int main()
{
  //Data
  string objective = "C2F"; // program objective


  introduction(objective); //user information
  double a; //celsius temperature
  double b; //fahrenheit temperature
  string filename; // to run program
//input from file
    ifstream fin;
    fin.open("temps.txt");
    if (!fin.good()) throw "I/O error";
    while (true)
    {
    fin >> a;
    fin.ignore(1000,10);
    if (a==-999) break;
    b=(a*9)/5+32;
    cout << a <<" Celsius equals ";
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(1);
    cout << b <<" Fahrenheit." <<endl;
    }
    fin.close();

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

