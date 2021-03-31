//Objective:  simulate rolling two dices
//Name: kunming zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
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
  srand(time(0)); rand(); // "seed" the random number generator
  int a; // the name of the first die
  int b; // the name of the second die
  int total; // the result

  // introduction
  cout << "Objective: This program will simulate rolling two dices.\n"; 
  cout << "Programmer: kunming zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


  //roll dice
  a = 1 + rand() % 6;
  b = 1 + rand() % 6;
  total = a + b;

  //output results
  cout << "Dice result: " << total << " (" << a << " and " << b << ")" << endl;


}//main






