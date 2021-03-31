//Objective:  decl
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
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
  int luckynumber; //lucky number (integer).
  string movie; //favorite movie (text)
  double age; //age (decimal)
  char letter; //first letter in their name (single character)
 
  // introduction
  cout << "Objective: decl.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


  cout << "What is your lucky number?";
  cin >> luckynumber;
  cin.ignore(1000,10);
  cout << "What is your favorite movie?";
  getline(cin, movie);
  cout << "How old are you?";
  cin >> age;
  cin.ignore(1000,10);
  cout << "What is the first letter in your name?";
  cin >> letter;
  cin.ignore(1000,10);



//output
  cout << letter << " is " << fixed << setprecision(1) << age << "years old, and " << luckynumber << " is his/her lucky number, " << movie << " is his/her favorite movie." << endl;

}//main
