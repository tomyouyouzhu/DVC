//Objective:  area
//Name: kunming zhu

//Course: COMSC-110-1021

//Compiler: Xcode
//Editor: TextEdit



//libraries

#include <iostream>

using namespace std;

#include <cmath>




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

    double r;

    double area;

    double pi = 4 * atan(1.0); // 4 times the angle whose tangent is 1
    
    

// introduction

    cout << "Objective: area .\n";

    cout << "Programmer: kunming zhu\n";

    cout << "Editor(s) used: TextEdit\n";

    cout << "Compiler(s) used: Xcode\n";

    cout << "File: " << __FILE__ << endl;

    cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
    
    

// ask user to enter a circle's radius
 
   cout << "Enter the radius of a circle: ";
 
   cin >> r;
    
    //circle's area
 
   area = pi * r * r;
    
    

//output results
 
   cout << " The area is " << area << endl;
    


}//main



