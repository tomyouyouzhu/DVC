//Objective:  convert fahrenheit to celsius temperature
//Name: kunming zhu
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
//NONE

//main program
int main()
{
  //Data
  double c; // degrees Celsius
  double f; // degrees Fahrenheit

  // introduction
  cout << "Objective: convert fahrenheit to celsius temperature.\n"; 
  cout << "Programmer: kunming zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


  // ask user to enter Fahrenheit
  cout << "Enter the temperature in degrees Fahrenheit: ";
  cin >> f;

  //convert temprature
  c = 5 * (f - 32) / 9;

  //output results
  cout << " That's " << c << " degrees Celsius!" << endl;
} // main