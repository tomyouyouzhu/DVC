//Objective:  studentlist

//Name: Kunming Zhu

//Course: COMSC-110-1021

//Compiler: TDM MinGW

//Editor: MS NotePad



//libraries

#include <fstream>

#include <iomanip>

#include <iostream>

#include <string>
using 
namespace std;




//Programmer defined data types

struct Student

{

	string name;

	int id;
	float gpa;

	Student* next; // the next-link

};

 // Student

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

	int count;//number of student

	string objective = "studentlist"; // program objective

	introduction(objective); //user information

	// open a file for input

		ifstream fin;

		fin.open("students.txt");

		if (!fin.good()) throw "I/O error";
	 
		// create an empty linked list

		Student* start = 0;

	        count=0;

		// read and save the records

		while (fin.good())

		{

			// Step 1, create a node

			Student* aStudent = new Student;


			// Step 2, read its data fields

			getline (fin, aStudent->name);

                        count++;

			fin >> aStudent->id;

			fin.ignore(1000, 10);

	 
		fin >> aStudent->gpa;

			fin.ignore(1000, 10);

	 
		fin.ignore(1000, 10); // skip the separator line


			// Step 3, add new node to the list

			aStudent->next = start;

			start = aStudent;

		}

		fin.close();
	 
		// traverse the list and output

		cout<<"There are "<<count<<" students."<<endl;

		Student* p;

		for (p = start; p; p = p->next)

		{

			cout << "Name = " << left << setw(30) << p->name;

			cout.fill('0');
 
			cout << " ID = " << right << setw(7) << p->id
				<< ", gpa = " << p->gpa << endl;

			cout.fill(' ');
 
		}


}//main



// introduction

void introduction(string obj)

{

	// data
	
        // obj is the program objective from main program
 

	//introduction

	cout << "Objective: studentlist ";

	cout << obj << endl;
 
	cout << "Programmer: Kunming Zhu\n";
 
	cout << "Editor(s) used: Notepad\n";
 
	cout << "Compiler(s) used: TDM MinGW\n";
 
	cout << "File: " << __FILE__ << endl;
 
	cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
 
} //void introduction

