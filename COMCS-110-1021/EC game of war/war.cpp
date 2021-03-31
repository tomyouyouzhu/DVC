//Objective:  template for C++ programs and to test code
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <ctime>
#include <cstdlib>
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
  int cv;//computer card value
  string cvv;//computer card value for 11-14
  int hv;//human card value
  string hvv;//human card value for 11-14
  int d;//difference of computer card and human card
  int cs;//computer card suit
  string css;//computer suir word
  string hss;//human suit word
  int hs;//human card suit
  char cho;//human choice
  string objective = "template for C++ programs and to test code"; // program objective
  introduction(objective); //user information


  cout <<"Welcome to the game of war!" << endl;
  while (true)
  {
  do 
  {
  cv=rand()%13+2;
  if (cv==11)
  cvv="Jack";
  if (cv==12)
  cvv="Queen";
  if (cv==13)
  cvv="King";
  if (cv==14)
  cvv="Ace";
  cs=rand()%4;
  if (cs==0)
  css="Spades";
  if (cs==1)
  css="Diamonds";
  if (cs==2)
  css="Hearts";
  if (cs==3)
  css="Club";
  hv=rand()%13+2;
  if (hv==11)
  hvv="Jack";
  if (hv==12)
  hvv="Queen";
  if (hv==13)
  hvv="King";
  if (hv==14)
  hvv="Ace";
  cs=rand()%4;
  if (hs==0)
  hss="Spades";
  if (hs==1)
  hss="Diamonds";
  if (hs==2)
  hss="Hearts";
  if (hs==3)
  hss="Club";
  d=cv-hv;
  if (cv<=10)
  cout << "Computer's card is a " << cv << " of " << css <<" ."<<endl;
  if (cv>10)
  cout << "Computer's card is a " << cvv <<" of "<< css <<" ."<<endl;
  if (hv<=10)
  cout <<"Human's card is a "<< hv <<" of "<< hss <<" ."<<endl;
  if (hv>10)
  cout <<"Human's card is a "<< hvv <<" of "<< hss <<" ."<<endl;
  if (d>0)
  cout <<"Computer wins!"<< endl;
  if (d<0)
  cout <<"Human wins!"<< endl;
  if (d==0)
    cout <<"Tie!"<<endl;
  }while (d==0);
  cout <<"Want to play again? Any key for yes, N for no.";
  cin >>cho;
  if (cho=='N')
  return 0;
  }//while true
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: This program will ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

