//Objective:  porkerHand
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
  int n = 5; // deal this many cards
  int value; //card value
  int suit; //card suit

  // introduction
  cout << "Objective: porkerHand.\n"; 
  cout << "Programmer: kunming zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //dea a pocker hand
  for (int i = 0; i < n; i++)
  {
    value = 1 + rand() % 13;
    suit = rand() % 4;
    switch (value)
    {
      case 1:
        cout << "Ace";
        break;
      case 11:
        cout << "Jack";
        break;
      case 12:
        cout << "Queen";
        break;
      case 13:
        cout << "King";
        break;
      default:
        cout << value;
    } // switch
    switch (suit)
    {
      case 0:
        cout << " of Spades" << endl;
        break;
      case 1:
        cout << " of Hearts" << endl;
        break;
      case 2:
        cout << " of Diamonds" << endl;
        break;
      case 3:
        cout << " of Clubs" << endl;
     } // switch
  } // for

}//main





