//Objective:  nsaEncoder
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <ctime>

#include <cstdlib>
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
  string objective = "nsaEncoder"; // program objective
  const int SIZE=5; //array size
  int offset[SIZE]={-10, -5, 0, 5, 10};
  int counter;
  int key; // key number
  introduction(objective); //user information
  cout <<"Please input the file name (the file name shuold end like '.txt': ";

  getline (cin, c);

  ifstream fin;

  fin.open(c.c_str());

  if (!fin.good()) throw "I/O error";

  ofstream fout;

  ofstream fout2;
  fout.open("offset.txt",ios::app);

  if (!fout.good()) throw "I/O error";

  fout2.open("key.txt",ios::app);
  if (!fout2.good()) throw "I/O error";
  counter=rand()%SIZE;
  while (true)

  {
    int index = counter % SIZE;
    counter++;
    key=index;
    getline (fin, a);
  
  for (b=0;b<a.length();b=b+1)

    {
  
    a[b]=a[b]+offset[index]; // encode
  
  }//for b

  fout << a<< endl;

  fout2 << key <<endl;
  cout << a << endl;

  cout <<"If you want to continue press any key then press 'enter', if you want to stop press 'N' : ";

  cin >> d;
  if (d=='N'||d=='n') break;

  if (fin.eof()) break;
  }

  fin.close();

  fout.close();
  fout2.close();
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: nsaEncoder ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

