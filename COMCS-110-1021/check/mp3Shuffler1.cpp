//Objective:  mp3Shuffler1

//Name: Kunming Zhu

//Course: COMSC-110-1021

//Compiler: TDM MinGW

//Editor: MS NotePad

/

/libraries

#include <ctime>

#include <fstream>

#include <iostream>

#include <string>

using namespace std;



//Programmer defined data types

//NONE



//Special compiler dependent definitions

//NONE



//global constants/variables

//NONE



//Programmer defined functions
void introduction(string obj);
 //user information


//main program

int main()

{

	//Data

	string objective = "mp3Shuffler1"; // program objective

	const int SIZE=200;

	int i;//loop

	string songs[SIZE];//songs array

	int num;//random number

	char ch;//user choice

	introduction(objective); //user information

	
fstream fin;

	fin.open("songs.txt");

	if (!fin.good()) throw "I/O error";

	for (i=0; i<SIZE; i++)

	{

	  fin >>songs[i];

	  if (fin.eof()) break;

	}

	fin.close();

        while (true)

        {

	  cout<<"Play a song?(Y/N): ";

	  cin >> ch ;

	  if (ch!='Y'&& ch!='y' && ch!='N'&&ch!='n')

	  {

		cout <<"Please input Y or N to choose.";

	  }

	if (ch=='Y' || ch=='y')

	{

	  num=rand()%i;

	  cout << songs[num] <<endl;

	}

	if (ch=='N'||ch=='n')     return 0;

        }

}//main



// introduction

void introduction(string obj)

{

	// data
	// obj is the program objective from main program 


	//introduction

	cout << "Objective: mp3Shuffler1 ";

	cout << obj << endl;
 
	cout << "Programmer: Kunming Zhu\n";
 
	cout << "Editor(s) used: Notepad\n";
 
	cout << "Compiler(s) used: TDM MinGW\n";
 
	cout << "File: " << __FILE__ << endl;
 
	cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
 
} //void introduction

