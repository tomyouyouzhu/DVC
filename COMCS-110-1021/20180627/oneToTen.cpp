//Objective:  oneToTen
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <ctime>
#include <cstdlib>
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
  srand(time(0));
  int number1;
  int number2;

  // introduction
  cout << "Objective: oneToTen.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  number1= 1+(rand() % 10);
  while (true)
  {
  cout << "I'm thinking of a number from 1 to 10." << endl;
  cout << "Please make a guess and input it:";
  cin >> number2;
  cin.ignore(1000, 10);
  if (number1==number2)
  {
    cout << "You guessed it!";
    break;
  }
  else if (number2<1 || number2>10)
  {
    cout << "Oh, that not the rule, please input number from 1 to 10.";
  }
  else
  {
    cout << "Try again..." << endl;
  }
  }// while true
}//main
