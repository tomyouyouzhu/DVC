//Objective:  nsaDecoder1
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
void introduction(string obj); //user information

//main program
int main()
{
   //Data
    string a; //user input
    int b=0; //loop index
    string c;// input file name
    char d;//choice
    string objective = "nsaDncoder"; // program objective
    introduction(objective); //user information
    ifstream fin;
    fin.open("secret.txt");
    if (!fin.good()) throw "I/O error";
    while (true)
    {
    getline (fin, a);
    for (b=0;b<a.length();b=b+1)
    {
      a[b]=a[b]-1; // bump the ASCII code by 1
    }//for b
    cout << a << endl;
    cout <<"If you want to continue press any key then press 'enter', if you want to stop press 'N' : ";
    cin >> d;
    if (d=='N'||d=='n') break;
    if (fin.eof()) break;
    }
    fin.close();
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: This program will ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

