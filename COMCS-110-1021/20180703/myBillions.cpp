//Objective:  mybillions
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

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
void introduction(string obj); //user information

//main program






int main()
{
  
 
  string objective = "mybillions"; // program objective


  introduction(objective); //user information
  

//Data

  
int money=0;

  int week=1;

  do
  {
    
  week= week +1;

      money=0.05*(pow(2,week+1)-1);
    
  } while (money<1000);


  cout << "In "<< week+1 <<" weeks, you will become a thousandaire."<<endl;


  
 do
 {

      week= week +1;
      money=0.05*(pow(2,week+1)-1);
    
  } while (money<1000000);


  cout << "In "<< week+1 <<" weeks, you will become a millionaire."<<endl;


  
 do
 {

      week= week +1;
    
  money=0.05*(pow(2,week+1)-1);
    
  } while (money<1000000000);


  cout << "In "<< week+1 <<" weeks, you will become a billionaire."<<endl;

}//main


// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: mybillions ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

