//Objective:  passby
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//Programmer defined data types
struct People
{
	string movie;
	string song;
	string food;
	string sport;
	string tv;
	string book;
	string place;
};

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
	const int N=12;
	int nrecords;
	int i; //loop index variable (outer loop)
	int j; //loop index variable (inner loop)
	string whoareyou[N];  
	string answer;
	const int MAX_PEOPLES = 12; // capacity of array based list student
	int nPeoples = 0; // number of students in array based list student
	People people[MAX_PEOPLES];  //array based list student
	People aPeople; //each student read from input file
	People temp; //holds a student temporarily during sort swap

	string objective = "passby"; // program objective
	introduction(objective); //user information

	ifstream fin;
	fin.open("favoritesData.txt");
	if (!fin.good()) throw "I/O error";
	while (fin.good())
	{
    for (i=0; i<N; ) 
	getline(fin,aPeople.movie);
	getline(fin,aPeople.song);
	getline(fin,aPeople.food);
	getline(fin,aPeople.sport);
	getline(fin,aPeople.tv);
	getline(fin,aPeople.book);
	getline(fin,aPeople.place);
	fin.ignore(1000, 10); 
	cout<<' '<<endl;
	cout<<"Favorite movie : " <<aPeople.movie<<endl;
	cout<<"Favorite song : "<<aPeople.song<<endl;
	cout<<"Favorite food : "<<aPeople.food<<endl;
	cout<<"Favorite sport : "<<aPeople.sport<<endl;
	cout<<"Favorite TV shows : "<<aPeople.tv<<endl;
	cout<<"Favorite book : "<<aPeople.book<<endl;
	cout<<"Favorite place : "<<aPeople.place<<endl;
	cout<<"Who is it? ";
	getline(cin,answer);
	for (i=0; i<N; i++)
	  whoareyou[i]=answer;
	}
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

	//introduction
  cout << "Objective: passby ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

