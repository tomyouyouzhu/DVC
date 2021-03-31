//Objective:  factorial
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries

#include <deque>
#include <iostream>
using namespace std;

//Programmer defined data types
struct Number

{

  int num;

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

  int i;//loop

  int b=2;//

  int c=2;//result

  int n;//user input number

  deque<Number> number;//collection
  Number aNumber;// for input
  string objective = " factorial";
 // program objective
  introduction(objective); //user information
  cout<<"Please input a number: ";

  cin>>n;

  cin.ignore(1000,10);

  if (n==1)

    cout<<" 1! equivalent of 1, or 1";

  if (n==2)

    cout<<" 2! equivalent of 2 x 1, or 2";

  if (n>2)

  {

    while (n>2)

    {

      b=b+1;

      aNumber.num=b;

      c=c*b;

      number.push_back(aNumber);

      if (b==n)

      {

        break;

      }

    }

    cout <<' '<<n<<"! equivalent 1 * 2 * ";

    for (i=0; i<number.size(); i++)

    {

      cout <<number[i].num<<" * ";

    }

    cout <<" or "<<c;
  }

}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective:  factorial ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

