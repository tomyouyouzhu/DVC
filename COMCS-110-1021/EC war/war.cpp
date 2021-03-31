//Objective:  war
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries

#include <deque>
#include <ctime>

#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

//Programmer defined data types
struct Game
{
  string suit;
  string value;
};

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information

int computer1()
{
  int a;
  a=rand()%13;
  return a;
}

int computer2()
{
  int a;
  a=rand()%4;
  return a;
}

int human1()
{
  int a;
  a=rand()%13;
  return a;
}

int human2()
{
  int a;
  a=rand()%4;
  return a;
}

char judge(int a, int b)
{
  int d;//different of values
  char e;//win or lose
  d=a-b;
  if (d>0)
  {
    cout<<" Computer wins!"<<endl;
    return e='C';
  }
  if (d==0)
  {
    cout<<" Tie! "<<endl;
    return e='T';
  }
  if (d<0)
  {
    cout<<" Human wins! "<<endl;
    return e='H';
  }
}
string ask()
{
  string ch;
  ask:
  cout<<" Want to play again? (Y/N): ";
  getline(cin,ch);
  if (ch!="Y" && ch!="y" && ch!="N" && ch!="n")
  {
    goto ask;
  }
  else
  {
    return ch;
  }
}
  
//main program
int main()
{
  //Data

  string value[14]={"1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};//value arry
  string suit[4]={"Spades", "Diamonds", "Hearts", "Clubs"};//suit arry
  int c1;//random for computer card value   
  int c2;// random for computer card suit
 
  int h1;//random for human card value 
  int h2;// random for human card suit

  string ch;//choice
  int hw=0;//human win number
  int cw=0;//computer win number
  int tie=0;//tie number
  char wol;//win or lose
  deque<Game> game;
  Game aGame;
  cout <<" Welcome to the game of war!" << endl;

  srand(time(0));
  play:
  c1=computer1();
  c2=computer2();
  h1=human1();
  h2=human2();
  aGame.suit=suit[c2];
  aGame.value=value[c1];
  cout <<" Computer's card is a "<<aGame.value<<" of "<<aGame.suit<<endl;
  aGame.suit=suit[h2];
  aGame.value=value[h1];
  cout <<" Human's card is a "<<aGame.value<<" of "<<aGame.suit<<endl;  
  wol=judge(c1,h1);
  if (wol=='C')
  {
    cw++;
  }
  if (wol=='H')
  {
    hw++;
  }
  if (wol=='T')
  {
    tie++;
  }
  cout<<" Computer wins: "<<cw<<" , Human wins: "<<hw<<" Tie : "<<tie<<endl;
  ch=ask();
  if (ch=="Y" || ch=="y")
  {
    goto play;
  }
  if (ch=="N" || ch=="n")
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
  cout << "Objective: war ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

