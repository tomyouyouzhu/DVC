//Objective:  template for C++ programs and to test code
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
  double mile1; //miles already drived
  double mile2; //miles will drive
  double gallon1; //fuel used
  double gallon2; //fuel left
  double gallonpermile; //how many gallons of feul be used on one mile
  double tank; //how many gallons about the tank
 
  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
//input

  cout << "Please input how many gallons feul your car's tank can contan:";
  cin >> tank;
  cin.ignore(1000, 10);
  cout << "Please input how many miles you already drive:";
  cin >> mile1;
  cin.ignore(1000, 10);
  cout << "Please input how many gallon you already use:";
  cin >> gallon1;
  cin.ignore(1000, 10);
  gallonpermile=gallon1/mile1;
  gallon2=tank-gallon1;
  mile2=gallon2/gallonpermile;


//output

  cout << "Depend on your own driving way, the rest feul is " << gallon2 << ", and you can drive " << mile2 << " more miles.";

}//main
