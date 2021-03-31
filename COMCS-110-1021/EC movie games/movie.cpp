//Objective:  template for C++ programs and to test code
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <ctime>
#include <deque>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//Programmer defined data types
struct Movie
{
	string name;
	int year;	
};

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information
int ask(string name)
{
	int ans;
	cout<<"The year of "<<name<<" ? ";
	cin>> ans;
	cin.ignore(1000,10);
	return ans;
}
int random(int number)
{
	int a=rand()%number;
	return a;
}
int check(int a, int b)
{
	int c;
	if (a==b)
	{
	  return c=1;
	}
	else 
	{
	  return c=0;	
	}
}
char askuser()
{
	char choice;
	cout<<"What do you want to do now? [Y for play again, Q for quit]";
	cin>>choice;
	cin.ignore(1000,10);  
	return choice;
}
char quit1(int a)
{
	char choice;
	cout<<"Do you want to add a new movie?[Y/N]";
	cin>>choice;
	return choice;
}
void output(deque<Movie>& list)
{
	int i;
	int j;
	for (i=0; i<list.size(); i++)
	{
		for (j=i+1; j<list.size(); j++)
		{
	        if (list[i].year>list[j].year)
	        {
		        Movie temp=list[i];
		        list[i]=list[j];
		        list[j]=temp;
	        }
		}
		cout<<"NAME : "<<list[i].name<<endl;
		cout<<"YEAR : "<<list[i].year<<endl;
	}
}
string input()
{
	string name;
	cout<<"Please input the movie's name : ";
	cin.ignore(1000,10);
	getline(cin, name);
	return name;
}	
//main program
int main()
{
	//Data
	deque<Movie> list;
	int size;	
	int randomnum;
	int answer;
	int scores;
	int useranswer;
	string moviename;
	int movieyear;
	char choice;
	int j;
	int i;
	Movie temp;
	string objective = "template for C++ programs and to test code"; // program objective
	introduction(objective); //user information
	ifstream fin;
	fin.open("movieData.txt");
	if (!fin.good()) throw "I/O error";	
	while (fin.good())
	{
		Movie aList;
		getline(fin,aList.name);
		fin>>aList.year;
		fin.ignore(1000,10);
		fin.ignore(1000,10);
		list.push_back(aList);
	}
	fin.close();
	size=list.size();
	game:
	randomnum=random(size);
	answer=ask(list[randomnum].name);
	useranswer=check(list[randomnum].year,answer);
	if (useranswer==1)
	{
		cout<<"Correct!"<<endl;
		scores++;
	}
	else 
	{
		cout<<"The correct answer is "<<list[randomnum].year<<endl;
	}
    choice=askuser();
    if (choice!='Y'&&choice!='y'&&choice!='Q'&&choice!='q')
    {
	  choice=askuser();
    }
	if (choice=='Y'||choice=='y')
	{
		goto game;
	}
	if (choice=='Q'||choice=='q')
	{
	  choice=quit1(scores);
	  if (choice=='Y'||choice=='y')
	  {
		ofstream fout;
		fout.open("movieData.txt",ios::app);
		if (!fout.good()) throw "I/O error";
		moviename=input();
		for (j=0; j<size; j++)
		{
			if (moviename==list[j].name)
			{
				cout<<"Already have this movie."<<endl;
			    moviename=input();
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
	  }
	  if (choice=='N'||choice=='n')
	  {
        cout<<"Your score is "<<scores<<endl;
	  }
	  else 
	  {
		quit1(scores);
	  }
	}
    output(list);

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

