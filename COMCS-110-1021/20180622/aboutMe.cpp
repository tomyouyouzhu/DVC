//Objective:  aboutMe
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
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
  int LuckNumber = 9;  //I like this number
  double amountEarned = 999999999;   //I hope I can earn these much
  string movie = "Face Off";   //Just like this movie
  char initial = 'Z';    //In fact, I didn`t use this one
  
  

  // introduction
  cout << "Objective: aboutMe.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


  //output
  cout << "I don`t want to share my personal information, but my lucknumber is " << LuckNumber << endl;
  cout << "I hope that I can have " << amountEarned << endl; 
  cout << "I like " << movie << endl;
  cout << "My initial is " << initial << endl;

  

}//main
