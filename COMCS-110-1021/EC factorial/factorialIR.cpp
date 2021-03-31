//Objective:  factorialIR
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
void 
introduction(string obj); //user information

int factorial(int n)

{

  int f;

  if (n < 2) // detecting a base case

    f = 1;

  else

  {

    int i;//loop

    deque<Number> number;

    Number aNumber;

    f = n * factorial(n - 1);

    aNumber.num=n;

    number.push_back(aNumber);

    for (i=0; i<number.size(); i++)

    {

      cout <<number[i].num<<" ";

    }

  }

  return f;

} // factorial


//main program

int main()

{

  //Data

  int n;

  string objective = "factorialIR"; // program objective

  introduction(objective); //user information

  cout << "Enter n: ";

  cin >> n;

  cin.ignore(1000, 10);

  cout<<' '<<n<<"! equivalent 1 ";

  cout<<factorial(n) << endl;

}//main




// introduction

void introduction(string obj)

{

  // data

  // obj is the program objective from main program
 

  //introduction

  cout << "Objective: factorialIR ";

  cout << obj << endl;
 
 cout << "Programmer: Kunming Zhu\n";
 
 cout << "Editor(s) used: Notepad\n";
 
 cout << "Compiler(s) used: TDM MinGW\n";
 
 cout << "File: " << __FILE__ << endl;
 
 cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
 
} //void introduction

