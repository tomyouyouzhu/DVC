//Objective:  Term Project
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
struct List //table for list
{
  string email;
};

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void userintroduction(int a)//user introduction
{
  //input introduction
  if (a==1)
  {
    cout << "Objective: Term Project ";
    cout << "Programmer: Kunming Zhu\n"; 
    cout << "Editor(s) used: Notepad\n"; 
    cout << "Compiler(s) used: TDM MinGW\n"; 
    cout << "File: " << __FILE__ << endl; 
    cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
    cout<<"Enter input filename (with .txt as an end) (press ENTER without input to choose default) [default: fileContainingEmails.txt]: ";
  }
  //output introduction
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
  //data
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
  //data
  string ch;//let user press enter(can be empty)
  cout<<"Please press ENTER key to continue"<<endl;
  getline(cin,ch);
}
char checkdot(char a)//check email dot
{
  //data
  char hasdot;//if has dot
  if (a=='.')
  {
    return hasdot='Y';
  }
  else return hasdot='N';
}

void sort(deque<List>& list)//sort and output to screen the list
{
  //data
  int i;//loop
  int j;//loop
  for (i=0; i<list.size(); i++)
  {
    for (j=i+1; j<list.size(); j++)
    {
      if (list[i].email>list[j].email)
      {
        List temp=list[i];
        list[i]=list[j];
        list[j]=temp;
      }//loop for comparing
    }//j loop
    cout<<list[i].email<<endl;
  }//i loop
}
char ValidEmailChar(char a)//check letters 
{
  //data
  char yn;//pass or no pass
  if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
  {
    return yn='Y';
  }//letters
  else if (a>='0' && a<='9')
  {
    return yn='Y';
  }//numbers
  else if (a=='_' || a=='+' || a=='-' || a=='.')
  {
    return yn='Y';
  }//four signs
  else return yn='N';
}
string changeCase(string a) //changing case for checking duplicates
{
  //data
  int i;//loop
  for (i=0; i<a.length(); i++)
  {
    if (a[i]>='A' && a[i]<='Z')
    {
       a[i]=a[i]+32;
    }//change up to low
    else a[i]=a[i];    
  }
  return a;
}
void output(deque<List> list, string name)//output to the file
{
  //data
  int i;//loop
  ofstream fout;
  fout.open(name.c_str());
  if (!fout.good()) throw "I/O error";
  fout<<list[1].email;
  for (i=1; i<list.size(); i++)
  {
    fout<<"; "<<list[i].email;
  }
  fout.close();
}
char checkduplicate(deque<List> list, string a)//check duplicate
{  
  //data
  int i;//loop
  char yn;//pass or no pass
  string temp;
  if (list.size()==0) return yn='N';
  if (list.size()>0)
  {
    for (i=0; i<list.size(); i++)
    {
      if (changeCase(list[i].email)==changeCase(a)) return yn='Y';   
    } 
    for (i=0; i<list.size(); i++)
    {
      if (changeCase(list[i].email)!=changeCase(a)) return yn='N';   
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
  int n;//for loop
  int name;//check input
  string anemail;// anemail
  char hasdot;//email dot 
  int dotpos;//dot position
  char word;//for checking return
  int nemail=0;//count of emails
  deque<List> list;//list
  List aList;//temp element
  //input input file name
  userintroduction(1);
  do
  {
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
  userintroduction(2);
  do
  {    
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
          word=ValidEmailChar(line[s]);
          if (word=='N')
          {
            break;           
          } //validchar check        
        }//s loop
        s=s+1;        
        for (e=i+1; e<line.length(); e++)
        {
          word=ValidEmailChar(line[e]);
          if (word=='N')
          { 
            break;
          }//validchar check
          hasdot=checkdot(line[e]);
          if (hasdot=='Y')
          {
            dotpos=e;
          }//dotpos check
        } //e loop
        if (e-s<5) break;//not an email
        anemail=line.substr(s,e-s);
        word=checkduplicate(list,anemail);//check duplicates
        if (word=='Y') break;
        if (word=='N')
        {                                       
          aList.email=anemail;
          list.push_back(aList); 
          nemail++;         
        }                                                           
      }//check @
    } //i loop                       
  }//while loop
  fin.close();   
  sort(list);//sort and output on screen
  if (list.size()>0)
  {
    output(list, oFileName);
  }//output when file is not empty
  cout<<endl;
  if (list.size()==0)
  {
    cout<<"Sorry, no email addresses were found in the file "<<iFileName<<" ."<<endl;
  }//output when file is empty
  if (list.size()>0)
  {
    cout<<"There are "<<list.size()<<" non-duplicate email address, and copied to the file "<<oFileName<<" ."<<endl;
  }//when the file is not empty, tell user how many emails
  cout<<"Thanks for using."<<endl;
}//main
