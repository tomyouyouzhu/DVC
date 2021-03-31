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
  string ofilename="classRoster.txt";

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  // read a student's name from the keyboard (see 5.1) 
  string name; 
  cout << "What is your name? "; 
  getline(cin, name); 
  
  // write the student's name to classRoster.txt 
  ofstream fout; 
  fout.open(ofilename.c_str(),ios::app);
  if (!fout.good()) throw "I/O error"; 
  fout << name << endl; 
  fout.close(); 
  cout << "HaHa" ;

}//main
