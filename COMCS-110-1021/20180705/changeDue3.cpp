//Objective:  calculate change due in a transaction using these U.S. bills – no cents: $1, $2, $5, $10, $20, $50, $100, $500, $1000, $5000, $10000, and $100000 bills.
//Name: kunming zhu
//Course: COMSC-110-8215
//Compiler: MingGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iostream>
#include <string>
using namespace std;
#include <iomanip>

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
  // output my name and objective and program information
  cout << "Objective: calculate change due in a transaction using these U.S. bills – no cents: \n $1, $2, $5, $10, $20, $50, $100, $500, $1000, $5000, $10000, and $100000 bills.\n"; 
  cout << "Programmer: kunming zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: MingGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //variables
  double amountOwed; //amount owed
  double cashPaid;  //amount paid
  double changeDue;
  string filename="change"; //oder to open program
  cout <<"Pleas in put 'change' to see changedue. ";
  getline(cin,filename);
  if (filename=="change") 
  {
    ifstream fin;
    fin.open("change.txt");
    if (!fin.good()) throw "I/O error";
    fin >> amountOwed;
    fin.ignore(1000,10);
    fin >> cashPaid;
    fin.ignore(1000,10);
    fin.close();
  //calculate change due
  
    changeDue=cashPaid-amountOwed;

//***you figure out what goes here***
    
 

  //output calculated change due for each kind of monetary demonination
    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(2);
    cout << "Amount owed:$ " << amountOwed << endl;
    cout << "Cash paid:$ " << cashPaid << endl;
    cout << "Total change due:$ " << changeDue<< endl;
  }






//***you figure out what goes here***

  cout << "Pleas go and check the file change.txt has amount owed on line 1 and cash paid on line 2. Thanks!";
}