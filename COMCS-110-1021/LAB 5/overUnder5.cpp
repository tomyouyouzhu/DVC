//Objective:  overunder guessing game
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries

#include <deque>

#include <ctime>

#include <cstdlib>

#include <fstream>

#include <iostream>

#include <string>
using namespace std;

//Programmer defined data types
struct Number

{

  int guess;

};

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

  int a;// computer random a number

  int b; // user guessing number

  int c; // the difference of a and b

  int n=0; // guessing counting number

  int i;

  const int N=100;

  deque<Number> number;

  Number aNumber;

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

  //random a number

  srand(time(0));
  a = rand() % 101;

  //check user input

  while (b!=a)

  {

    input:

    cout <<"Please input your guessing number: ";

    cin >> b;

    cin.ignore(1000,10);

    aNumber.guess=b;

    for (i=0; i<number.size(); i++)

    {

      if (b==number[i].guess)

      {

        cout<<"Your already guessed this number."<<endl;

        goto input;

      }

    }

    if (b >= 1 && b <= 100)

    {


      n = n+1;

      c=a-b;

      if (c>0)

      {

        cout <<"The number is lower." << endl;

        number.push_back(aNumber);

      }

      if (c<0)

      {

        cout <<"The number is higher." <<endl;

        number.push_back(aNumber);

      }
    
}

    else

    {

      cout<< "Please input number from 1 to 100." << endl;

    }

  }

  if (a==b)

  {

    cout <<"Correct, you win! You just use " << n <<" guesses to get the correct number!"<< endl;

    fstream fout;

    fout.open("score.txt");

    if (!fout.good()) throw "I/O error";
    
    fout << "Last player took " << n <<" guesses to guess the correct number." << endl;

    fout.close();

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

