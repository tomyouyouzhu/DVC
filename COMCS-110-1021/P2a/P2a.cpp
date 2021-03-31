//Objective:  P2a
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

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
void introduction(string obj); //user information

//main program
int main()
{
  //Data
  string iFileName;// is the input file name
  string diFileName="fileContainingEmails.txt";// is the default input file name
  string doFileName="copyPasteMyEmails.txt";// is the default output file name
  string oFileName;// is the output file name
  string ch;//user choice 
  string objective = "P2a"; // program objective
  introduction(objective); //user information
  input:
  cout<<"Enter input filename (with .txt as an end) (press ENTER without input to choose default) [default: fileContainingEmails.txt]: ";
  getline(cin, iFileName);
  if (iFileName.length()==0)
  {
    iFileName=diFileName;
    doFileName=doFileName;
  }
  if (iFileName.length()<5)
  {
    cout<<"Please input a correct filename."<<endl;
    goto input;
  }
  else 
  {
    doFileName=iFileName;
  }
  cout<<"Enter output filename (with .txt as an end) (press ENTER without input to choose default) [default: "<<doFileName<<"]:";
  getline(cin, oFileName);
  if (oFileName.length()==0)
  {
    oFileName=doFileName;
  }
  cout<<"Input file: "<<iFileName<<endl;
  cout<<"Output file: "<<oFileName<<endl;

  cout<<"Press ENTER key to continue: ";
  getline(cin,ch);
  if (ch.length()>=0)
  {
    return 0;
  }
  

}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: P2a ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

