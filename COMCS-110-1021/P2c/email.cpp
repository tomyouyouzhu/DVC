//Objective:  P2b
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
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information
void userintroduction(int a)//user introduction
{
	if (a==1)
		cout<<"Enter input filename (with .txt as an end) (press ENTER without input to choose default) [default: fileContainingEmails.txt]: ";
	if (a==2)
	{
		cout<<"Enter output filename (with .txt as an end) (press ENTER without input to choose default--the same as your input file name.)"<<endl;
		cout<<"If you choose your own input file name, the default output file name is your input file name. ) :";
	}
}
string getFileName (string fileType, string dFileName)//for user inputing
{
	getline(cin, fileType);
	if (fileType.length()==0)
	{
		fileType=dFileName;
	}
	return fileType;
}
int check (int length) //for checking inputting
{
	int j;//to return input filename pass or no pass
	if (length<5)
	{
		cout<<"Please input a correct filename."<<endl;
		return j=0;
	}
	if (length>=5)
	{
		return j=1;
	}
}
void outputfilename(string a, string b)//output input and outpur file names
{
	cout<<"Input file: "<<a<<endl;
	cout<<"Output file: "<<b<<endl;
}
void hold()//wait for user press enter key
{
	string ch;
	cout<<"Please press ENTER key to continue"<<endl;
	getline(cin,ch);
}

bool checkfront(char a)
{
	if ((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||a=='_'||a=='+'||a=='-'||a=='.')
	{
		return true;
	}
	else return false;
}
char checkdot(char a)
{
	char dot;
	if (a=='.')
	{
		return dot='Y';
	}
	else return dot='N';
}
//main program
int main()
{
	//Data
	int n;
	int i;//for loop
	int e;//for loop
	int s;//for loop
	int dotpos;//dot position
	int anemail;// anemail
	char hasdot;//email dot 
	int nemail=0;//count of emails
	string line;//for reading the file
	string iFileName;// is the input file name
	string diFileName="fileContainingEmails.txt";// is the default input file name
	string oFileName;// is the output file name
	string ch;//user choice 
	string objective = "P2b"; // program objective
	int name;//check input
	introduction(objective); //user information
	//input input file name
	do
	{
		userintroduction(1);
		iFileName=getFileName (iFileName, diFileName);
		name=check (iFileName.length()); //check 
	}while (name!=1);
	if (iFileName=="fileContainingEmails.txt")
	{
		diFileName="copyPasteMyEmails.txt";
	}
	else
	{
		diFileName=iFileName;
	}
	//input output file name
	do
	{
		userintroduction(2);
		oFileName=getFileName (oFileName, diFileName);
		name=check (oFileName.length());//check
	}while (name!=1);
	//output
	outputfilename(iFileName,oFileName);
	hold();
	//read the txt file
	ifstream fin; 
	fin.open(iFileName.c_str()); 
	if (!fin.good()) throw "I/O error";  
	while (fin.good()) 
	{ 
		if(!fin.good()) break;
		getline(fin,line);
	    for (i=0; i<line.length(); i++)
	    { 
		    if (line[i]=='@') // check @
		    {
			    for (s=i-1; s>=0; s=s-1)
			    {
				    checkfront(line[s]);
				    if (checkfront(true))
				    {
					    anemail=s;
				    }
			        for (e=i+1; e<line.length(); e++)
			        {
				        hasdot=checkdot(line[e]);
				        if (hasdot=='Y')
				        {					      
					        if (e>i+1) 
					        {
						        nemail++;
					        }
					        if (line[e]==' '||line[e]==';'||line[e]=='\n')
					        {
						        dotpos=e;							   					    
					        }
				        }					 
				    }//for dot
			    }//s loop
			    for (n=anemail; n<dotpos; n++)
			    {						  
			        cout<<line[n];
			    }
		    }//@ loop 
	    }//i loop
	} // while 
	fin.close();
	cout<<endl;
	cout<<"There are "<<nemail<<" emails."<<endl;
	cout<<"Thanks for using.";
}//main

// introduction
void introduction(string obj)
{
	// data
	// obj is the program objective from main program 

	//introduction
	cout << "Objective: P2b ";
	cout << obj << endl; 
	cout << "Programmer: Kunming Zhu\n"; 
	cout << "Editor(s) used: Notepad\n"; 
	cout << "Compiler(s) used: TDM MinGW\n"; 
	cout << "File: " << __FILE__ << endl; 
	cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

