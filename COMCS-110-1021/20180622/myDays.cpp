
//Objective:  template for C++ programs and to test code

//Name: Kunming Zhu

//Course: COMSC-110-1021

//Compiler: Xcode

//Editor: TextEdit



//libraries

#include <iostream>

using namespace std;



//Programmer defined data types

//NONE



//Special compiler dependent definitions

//NONE



//global constants/variables

//NONE



//Programmer defined functions

//NON



//main program

int main()

{
    
  //Data
    
  int d1;
    
  int d2;
    
  int d3;
    
  int sum;
    
  d1=365; //days lived in my birth year.
    
  d2=6570; //days between birth year to 2018
    
  d3=174; //days lived in 2018
    
    
    

// introduction
    
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n";
    
  cout << "Programmer: Kunming Zhu\n";
    
  cout << "Editor(s) used: TextEdit\n";
    
  cout << "Compiler(s) used: Xcode\n";
    
  cout << "File: " << __FILE__ << endl;
    
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
    
    
  sum=d1+d2+d3;
    

//output
    
  cout << "I am born in 2000 1 1" << endl;
    
  cout << "The due day is 2018 6 24." << endl;
    
  cout << "I am " << sum << " days old by the due day" << endl;

}//main
