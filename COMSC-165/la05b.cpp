//Objective:  la05b
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
#include <fstream>
#include <string>

using namespace std;
int main() 
{
	string name;
	double a,b,c;
	cout<<"Please input the fiel name: ";
	getline(cin, name);
	cout<<"Please input three numbers: ";
	cin>>a>>b>>c;
	ofstream fout;
	fout.open(name.c_str());
	if(fout)
	{
	  fout<<a<<" "<<b<<" "<<c;	 
	  fout.close();
	  cout<<"Numbers are stored in the file: "<<name.c_str(); 
	}	
	else 
	{
	  cout<<"File wrong.";
	}
}