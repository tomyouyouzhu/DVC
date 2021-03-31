//Objective:  three questions
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <string>
#include <iostream>
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





bool questions1(int ROW)
{
  bool result=false; 
  string answer;

  cout<<"What is the name of the first computer?";  
  getline(cin,answer);
  
  if (answer == "ENIAC" || answer =="eniac")
    {
      ROW=1;
      cout << "  Right! " << endl;
      result=true;
    }
  else
  {
    ROW=0;
    cout << " Sorry, you are wrong."<<endl;
  }

  return result;
}

bool questions2(int ROW) 
{
  bool result=false;
  string answer;
  cout<<"Do you like coding?";  
  getline(cin,answer);

  if (answer == "YES" || answer=="yes")
    {
      ROW=1;
      cout << "  Right! " << endl;
      result=true;
    }
  else
  {
    ROW=0;
    cout << " Sorry, you are wrong."<<endl;
  }

  return result;
}

bool questions3(int ROW)
{
  bool result=false;
  string answer;
  cout<<"Do you hate coding?";
  getline(cin,answer);

  if (answer == "NO" || answer=="no")
    {
      ROW=1;
      cout << "  Right! " << endl;
      result=true;
    }
  else
  {
    ROW=0;
    cout << " Sorry, you are wrong."<<endl;
  }

  return result;
}

int main()
{
  //Data
  int score=0;



  string objective = "three questions"; // program objective
  introduction(objective); //user information

  if (questions1(true))
  score++;

  if (questions2(true))
  score++;

  if (questions3(true))
  score++;
  
  cout << " Your total score is " << score << " out of 3." << endl;
 
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: three questions ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

