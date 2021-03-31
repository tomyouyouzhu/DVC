//Objective:  hw05
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() 
{
	string inputname;
	string outputname;
	string line;
	cout<<"Source file name: ";
	getline(cin, inputname);
	cout<<"Destination file name: ";
	getline(cin, outputname);
	ifstream fin;
	fin.open(inputname.c_str());
	if (!fin)
	{
	  cout<<"Failed to open source file."<<endl;
	}
	else 
	{
	  if (!fin.good()) throw "I/O error";
	  ofstream fout;
	  fout.open(outputname.c_str());
	  if (!fout.good()) throw "I/O error";  
	  while (fin.good()) 
	  {
		getline(fin, line);
		fout<<line<<endl;
	  }
	  fin.close();
	  fout.close();
	}		
}