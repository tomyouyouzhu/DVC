//Objective:  overunder guessing game
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

  int a; // computer random a number

  int b; // user guessing number

  int c; // the difference of a and b

  int n=0; // guessing counting number

  int i; // loop count 
  string lastplay; //playing information in score.txt

  string thisplay; //this game's information
  string objective = "guessing game"; // program objective
  introduction(objective); //user information

  cout <<"Welcom to the guessing number game, the range of guessing number is from 1 to 100. Good luck!" << endl;

  //read score.txt

  ifstream fin;

  fin.open("score.txt");

  if (!fin.good()) throw "I/O error";

  getline (fin, lastplay);

  cout << lastplay << endl;

  fin.close();

  //creat a empty list
  const int MAX_SCORELIST=100; //list capacity
  int nScorelist=0; //initially empty
  int scorelist[MAX_SCORELIST];
  //random a number

  a = rand() % 101;

  //check user input

  while (true)

  { 
    begin:// loop word
    cout <<"Please input your guessing number: ";
  
  cin >> b;

    cin.ignore(1000,10);
    for (i=0; i<nScorelist; i++)
      if (b==scorelist[i])
      {
        cout <<"You already guessed " << b <<endl;
        goto begin; // loop word
      }
    if (nScorelist<MAX_SCORELIST)
      scorelist[nScorelist++]=b;
  
  if (b >= 1 && b <= 100)

    {
  
    n = n+1;
  
    c=a-b;
  
    if (c>0)

      {
        cout <<"The number is lower." << endl;

      }

      if (c<0)

      {
        cout <<"The number is higher." <<endl;

      }
      
if (c==0)

      {
  
      cout <<"Correct, you win! You just use " << n <<" guesses to get the correct number!"<< endl;
  
      fstream fout;
  
      fout.open("score.txt");
  
      if (!fout.good()) throw "I/O error";
    
    fout << "Last player took " << n <<" guesses to guess the correct number." << endl;
  
      fout.close();
  
      break;

       }

     }

     else cout<< "Please input number from 1 to 100." << endl;
  }
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: overunder ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

