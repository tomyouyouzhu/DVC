//Objective:  lighthouse
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
  double height; // the height of the lighthouse in feet
  double mile;  //  the height of the lighthouse in mile
  double distance; // how far away a boat can see a lighthouse at sea. 

  // introduction
  cout << "Objective: lighthouse.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  cout << "Please input height of the lighthouse:";
  cin >> height;
  cin.ignore(1000, 10);
  mile=height/5280;
  distance=sqrt(0.8*height);
  
//output
  cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(6);
  cout << " A " << height << " foot tall lighthouse can be seen from " << distance << " miles away.";



}//main
