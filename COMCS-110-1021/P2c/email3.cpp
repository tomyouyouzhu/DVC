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
    return j=1;
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
void readfile(string name)//read txt file and out put lines asked
{
  int i;//for loop
  int e;//for loop
  int s;//for loop
  int n;
  int dotpos;//dot position
  int anemail;// anemail
  int hasdot=0;//email dot 
  int nemail=0;//count of emails
  string line;//for reading the file
  ifstream fin; 
  fin.open(name.c_str()); 
  if (!fin.good()) throw "I/O error";  
  while (fin.good()) 
  { 
    getline(fin, line);
    for (i=0; i<line.length(); i++)
    { 
      if (line[i]=='@') // check @
      {
        for (s=i-1; s>=0; s=s-1)
        {
          if ((line[s]>='a'&&line[s]<='z')||(line[s]>='A'&&line[s]<='Z')||(line[s]>='0'&&line[s]<='9')||line[s]=='_'||line[s]=='+'||line[s]=='-'||line[s]=='.')
          {
            anemail=s;
          }//begin of email
        }//s loop
        for (e=i+1; e<line.length(); e++)
        {
          if (line[e]=='.')
          {
            if (e>i+1)
            {
                hasdot=e;
                nemail++;
            }
            if (e==i+1) break;//wrong dot position						 
          }//for dot
        }//e loop
        for (e=i+1; e<line.length(); e++)
        {
          if (line[e]==' '||line[e]==';'||line[e]=='\n')
          {
            dotpos=e-1;
          }//dot position
          if (!fin.good())
          {
            dotpos=line.length();
          }
        }
        for(n=anemail; n<=dotpos; n++)//for output
        {
          cout<<line[n];
        }
        cout<<" ";
        if (!fin.good()) break;
      }//@ loop 
    }//i loop
  } // while 
  fin.close();
  cout<<"There are "<<nemail<<" emails."<<endl;
}
//main program
int main()
{
  //Data
  string iFileName;// is the input file name
  string diFileName="fileContainingEmails.txt";// is the default input file name
  string oFileName;// is the output file name
  string ch;//user choice 
  string objective = "P2b"; // program objective
  string line;//for check lines in the file
  int i;//for loop
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
  readfile(iFileName);
  cout<<endl;
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

