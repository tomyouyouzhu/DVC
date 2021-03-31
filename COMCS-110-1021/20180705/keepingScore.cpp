//Objective:  template for C++ programs and to test code
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream> 
#include <iostream> 
#include <string> 
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
  //NONE

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  // open scores.txt (see text section 10.2.2) 
  string scoreFile = "scores.txt"; 
  ifstream fin; 
  fin.open(scoreFile.c_str()); 
  if (!fin.good()) throw "I/O error"; 
  // create a variable, read it from scores.txt (10.1.5) 
  int wins; 
  fin >> wins; 
  fin.ignore(1000, 10); 
  cout << "You won " << wins << " time(s)." << endl; 
  // create a variable, read it from scores.txt (10.1.5) 
  int losses; 
  fin >> losses; 
  fin.ignore(1000, 10); 
  cout << "You lost " << losses << " time(s)." << endl; 
  // close scores.txt (10.1.3) 
  fin.close(); 
  // play the game(s) in a loop here (MISSING)
  // ...for each win, do wins++; 
  // ...for each loss, do losses++; 
 
  // rewrite scores.txt with the latest scores 
  ofstream fout; 
  fout.open(scoreFile.c_str()); 
  if (!fout.good()) throw "I/O error"; 
  fout << wins << endl; 
  fout << losses << endl; 
  fout.close(); 
}//main
