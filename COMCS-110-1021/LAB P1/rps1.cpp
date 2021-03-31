//Objective:  Rock Paper Scissors

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

//NONE



//main program

int main()

{
	

//Data
	
    char HH; //human chocie
	
    int RC; //radom number of compiter choice
	
    char CC; //computer choice by RPC
	
    char QW; //quit word
	
    int count1; // computer win count
	
    int count2; // human win count
	
    count1=0;
	
    count2=0;

	

// introduction
	
    cout << "Objective: Rock Paper Scissors.\n";
    cout << "Programmer: Kunming Zhu\n";
    cout << "Editor(s) used: Notepad\n"; 

    cout << "Compiler(s) used: TDM MinGW\n"; 

    cout << "File: " << __FILE__ << endl;
 
   cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
	


    cout << " Welcome to the Rock Paper and Scissors game, Pleas choose you choices." << endl;

  while (true)

  {

	do{

	  cout << " Choose: [R=rock, P=paper, S=scissors, or Q=quit]: ";

	  cin >> HH;

	  } while (HH!='R' && HH!='P' && HH!='S' && HH!='Q' && HH!='q');

    if (HH=='Q' || HH=='q')

    {
        cout << " Thanks for playing!";
        break;
 
    }
   
 RC=rand() % 3;

    if (RC==0)

    {

	CC='R';

    }

    else if (RC==1)

    {

	CC='P';

    }

    else if (RC==2)

    {

	CC='S';

    }


    if (CC=='R' && HH=='R')

    {

	cout << "Computer: " << CC << " Human: " << HH << endl;

	cout << "tie! computer win: " << count1 << ", Human win: " << count2 <<endl;

    }

    if (CC=='R' && HH=='P')

    {

	count2=count2+1;

	cout << "Computer: " << CC << " Human: " << HH << endl;

	cout << "Human win! computer win: " << count1 << ", Human win: " << count2 <<endl;

    }

    if (CC=='R' && HH=='S')

    {

	count1=count1+1;

	cout << "Computer: " << CC << " Human: " << HH << endl;
	
	cout << "Computer win! computer win: " << count1 << ", Human win: " << count2 <<endl;

    }

    if (CC=='P' && HH=='R')
	
    {

	count1=count1+1;

	cout << "Computer: " << CC << " Human: " << HH << endl;

	cout << "Computer win! computer win: " << count1 << ", Human win: " << count2 <<endl;

    }
    
if (CC=='P' && HH=='P')

    {

	cout << "Computer: " << CC << " Human: " << HH << endl;

	cout << "tie! computer win: " << count1 << ", Human win: " << count2 <<endl;

    }

    if (CC=='P' && HH=='S')

    {

	count2=count2+1;

	cout << "Computer: " << CC << " Human: " << HH << endl;

	cout << "Human win! computer win: " << count1 << ", Human win: " << count2 <<endl;

    }

    if (CC=='S' && HH=='R')

    {

	count2=count2+1;

	cout << "Computer: " << CC << " Human: " << HH << endl;

	cout << "Human win! computer win: " << count1 << ", Human win: " << count2 <<endl;
	
    }

    if (CC=='S' && HH=='P')	
    
{

	count1=count1+1;

	cout << "Computer: " << CC << " Human: " << HH << endl;

	cout << "Computer win! computer win: " << count1 << ", Human win: " << count2 <<endl;

    }
    if (CC=='S' && HH=='S')

    {
	
	cout << "Computer: " << CC << " Human: " << HH << endl;
	
        cout << "tie! computer win: " << count1 << ", Human win: " << count2 <<endl;

    }

  }
}//main
