//Objective:  movie
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <ctime>
#include <fstream>
#include <iostream>
using namespace std;

//Programmer defined data types
// a linked list to get txt file
struct List
{
	string name;
	int year;
	List* next;
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
	char ch;//user choice
	string inname;//for read the movie name
	int inyear;//for read the movie year
	string moviename;//user input movie name
	int movieyear;//user input movie year
	int num;//random number 
	int answer;//user answer
	int size; //size of list
	int score=0;//score
	int count=0;//elements number of linked list
	int j;//for loop
	string objective = "movie"; // program objective
	introduction(objective); //user information
	ifstream fin;
	fin.open("movieData.txt");
	if (!fin.good()) throw "I/O error";
	List* start=0;
	while (fin.good())
	{
		List* aList=new List;
		getline(fin,aList->name);
		fin>>aList->year;
		fin.ignore(1000,10);
		fin.ignore(1000,10);
		aList->next=start;
		start=aList;
		count++;
	}//read the txt file and count how many records 
	fin.close();
	List* i;
	string* name= new string[count];
	int* year=new int[count];
	fin.open("movieData.txt");
	if (!fin.good()) throw "I/O error";
	for (j=0; j<count; j++)
	{
		getline(fin,name[j]);
		fin>>year[j];
		fin.ignore(1000,10);
		fin.ignore(1000,10);
	}//use two list copy the linked list for asking and checking answers
	question:
	num=rand ()%count;//random a number for asking questions
	one:
	cout<<"Can you tell me which year of "<<name[num]<<" : ";
	cin>>answer;
	if (answer==year[num])
	{
		cout<<"Correct!"<<endl;
		score++;
	}
	if (answer!=year[num])
		cout<<"The correct answer is "<<year[num]<<endl;//check answers
	cout<<"What do you want to do?[Q for quit, Y for paly again, W for wite in a new movie and year] : ";
	question1:
	cin>>ch;
	cin.ignore(1000,10);//user choices
	if (ch=='Y' || ch=='y')
		goto question;
	if (ch=='Q' || ch=='q')
	{
		cout<<"Your score is "<<score<<endl;
	}
	if (ch=='W' || ch=='w')
	{
		ofstream fout;
		fout.open("movieData.txt",ios::app);
		if (!fout.good()) throw "I/O error";
		input:
		cout<<"Please input the movie's name : ";
		getline(cin, moviename);
		for (j=0; j<count; j++)
		{
			if (moviename==name[j])
			{
				cout<<"Already have this movie."<<endl;
				goto input;
			}
		}//input checking.
		fout<<endl;
		fout<<moviename;
		cout<<"Please input the movie's year : ";
		cin>>movieyear;
		fout<<endl;
		cin.ignore(1000,10);
		fout<<movieyear;
		fout<<endl;
		fout.close();
		cout<<"What do you want to do?[Q for quit, Y for play again, W for write in a new movie and year] : ";
		cin>>ch;
		cin.ignore(1000,10);
	}//user input new movies information
	else 
	{
		cout<<"Please input [Q for quit, Y for play again, W for write in a new movie and year] : ";
		goto question1;
	}
}//main

// introduction
void introduction(string obj)
{
	// data
	// obj is the program objective from main program 

	//introduction
	cout << "Objective: movie ";
	cout << obj << endl; 
	cout << "Programmer: Kunming Zhu\n"; 
	cout << "Editor(s) used: Notepad\n"; 
	cout << "Compiler(s) used: TDM MinGW\n"; 
	cout << "File: " << __FILE__ << endl; 
	cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

