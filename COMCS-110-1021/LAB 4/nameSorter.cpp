//Objective:  nameSorter
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information

//main program
int main()
{
  //Data
  string in;//input
  string name[100]; //name array
  int i; // loop
  int j; //another loop
  int u=5;
  string temp; //used for sort swap
  string objective = "nameSorter"; // program objective
  introduction(objective); //user information

//input
  cout <<"Please input the file name (with .TXT at the end): ";
  getline(cin,in);
  ifstream fin;
  fin.open(in.c_str());
  if (!fin.good()) throw "I/O error";
  for (i=0; i<100; i++)
  {
    fin >> name[i];
    fin.ignore(1000,10);
  }
  fin.close();
for (u=5; u<100; u++)
{
    for (i=0; i<5; i++)
    {
      for (j=i+1; j<5; j++)
      {
        if (name[i]==name[j])
        {
          name[i]=name[u]; 
        }
      }
    }
}
  cout << "Unsorted: "; 
  for (i = 0; i < 5; i++) 
    cout << name[i] << ' '; 
  cout << endl;
  
for (i=0; i<5; i++)
{
  for (j=i+1; j<5; j++)
  {
   if (name[i] > name[j]) 
    { 
      // swap code 
      temp = name[i]; 
      name[i] = name[j];   
      name[j] = temp; 
    } // if 
  }
}
cout << "Sorted: "; 
for (i = 0; i < 5; i++) 
  cout << name[i] << ' '; 
cout << endl; 
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: nameSorter ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

