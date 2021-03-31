//Objective:  P2d
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <deque>
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

//Programmer defined data types
struct List
{
  string email;
};

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
char checkdot(char a)
{
  char hasdot;
  if (a=='.')
  {
    return hasdot='Y';
  }
  else return hasdot='N';
}
void checkd(deque<List>& list)
{
  int i;
  int j;
  int n;
  for (i=0; i<list.size(); i++)
  {
    for (j=i+1; j<list.size(); j++)
    {
      if (list[i].email==list[j].email)
      {
        for (n=j; n<list.size()-1; n++)
        {
          list[n]=list[n+1];
          list[list.size()-1];
          list.pop_back();
        }
      }
    }
  }
}
void output(deque<List>& list)//ouput
{
  int i;
  int j;
  for (i=0; i<list.size(); i++)
  {
    for (j=i+1; j<list.size(); j++)
    {
      if (list[i].email>list[j].email)
      {
        List temp=list[i];
        list[i]=list[j];
        list[j]=temp;
      }
    }
    cout<<list[i].email;
    cout<<" ";
  }
}
char checkword(char a)//check letters 
{
  char yn;
  if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
  {
    return yn='Y';
  }
  else if (a>='0' && a<='9')
  {
    return yn='Y';
  }
  else if (a=='_' || a=='+' || a=='-' || a=='.')
  {
    return yn='Y';
  }
  else return yn='N';
}
void upertolower(deque<List>& list)
{
  int i;
  int j;
  for (i=0; i<list.size(); i++)
  {
    for (j=0; j<list[i].email.length(); j++)
    {
      if (list[i].email[j]>='A' && list[i].email[j]<='Z')
      {
         list[i].email[j]=list[i].email[j]+32;
      }
    }    
  }
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
  int e;//for loop
  int s;//for loop
  int begin;//begin of email
  int end;//end of email
  int name;//check input
  string anemail;// anemail
  char hasdot;//email dot 
  int dotpos;//dot position
  char word;//for checking return
  int nemail=0;//count of emails
  deque<List> list;
  List aList;
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
    getline(fin, line);
    for (i=0; i<line.length(); i++)
    { 
      if (line[i]=='@') // check @
      {
        for (s=i-1; s>=0; s=s-1)
        {
          word=checkword(line[s]);
          if (word=='N')
          {
            break;           
          }         
        }
        s=s+1;        
        for (e=i+1; e<line.length(); e++)
        {
          word=checkword(line[e]);
          if (word=='N')
          { 
            break;
          }
          hasdot=checkdot(line[e]);
        }
          anemail=line.substr(s,e-s);
          nemail++; 
          aList.email=anemail;    
          list.push_back(aList);                         
      }
    }                        
  }
  fin.close();
  upertolower(list);
  checkd(list);   
  output(list);
  cout<<endl;
  cout<<"There are "<<list.size()<<" emails."<<endl;
  cout<<"Thanks for using."<<endl;
}//main

// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: P2d ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

