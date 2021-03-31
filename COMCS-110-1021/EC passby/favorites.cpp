//Objective:  passby
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iostream>
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
  string answer;
};

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information
void output(int num,string num1,string num2,string num3,string num4,string num5,string num6,string num7,string num8);
//main program
int main()
{
  //Data
  int i;
  int j;
  const int MAX_WHOAREYOU=12;
  int nWhoareyous=0;
  People whoareyou[MAX_WHOAREYOU];
  People aWhoareyou;
  string objective = "passby"; // program objective
  introduction(objective); //user information
  ifstream fin;
  fin.open("favoritesData.txt");
  if (!fin.good()) throw "I/O error";
  while (fin.good())
  {
  getline(fin, aWhoareyou.movie);
  getline(fin, aWhoareyou.song);
  getline(fin, aWhoareyou.food);
  getline(fin, aWhoareyou.sport);
  getline(fin, aWhoareyou.tv);
  getline(fin, aWhoareyou.book);
  getline(fin, aWhoareyou.place);
  fin.ignore(1000,10);
  cout<<' '<<endl;
  cout<<"Favorite movie : "<<aWhoareyou.movie<<endl;
  cout<<"Favorite song : "<<aWhoareyou.song<<endl;
  cout<<"Favorite food : "<<aWhoareyou.food<<endl;
  cout<<"Favorite sport : "<<aWhoareyou.sport<<endl;
  cout<<"Favorite TV shows : "<<aWhoareyou.tv<<endl;
  cout<<"Favorite book : "<<aWhoareyou.book<<endl;
  cout<<"Favorite place : "<<aWhoareyou.place<<endl;
  cout<<"Who is it? ";
  getline(cin,aWhoareyou.answer);
  if (nWhoareyous<MAX_WHOAREYOU)
    whoareyou[nWhoareyous++]=aWhoareyou;
  }
  for (i=0; i<nWhoareyous; i++)
  {
  output(i+1,whoareyou[i].answer,whoareyou[i].movie,whoareyou[i].song,whoareyou[i].food,whoareyou[i].sport,whoareyou[i].tv,whoareyou[i].book,whoareyou[i].place);
  }
}//main

void output(int num,string num1,string num2,string num3,string num4,string num5,string num6,string num7,string num8)
{
  cout<<' '<<endl;
  cout<<"Person # "<<num<<" You think this is: "<<num1<<endl;
  cout<<"Favorite movie : "<<num1<<endl;
  cout<<"Favorite song : "<<num2<<endl;
  cout<<"Favorite food : "<<num3<<endl;
  cout<<"Favorite sport : "<<num4<<endl;
  cout<<"Favorite TV shows : "<<num5<<endl;
  cout<<"Favorite book : "<<num6<<endl;
  cout<<"Favorite place : "<<num7<<endl;
  cout<<' '<<endl;
}
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

