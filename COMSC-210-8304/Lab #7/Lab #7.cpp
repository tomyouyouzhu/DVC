//Objective:  
//Name: Kunming Zhu
//Course: COMSC-

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;

void parse_line(const string &str,
		vector<string> &row) {
	istringstream istr(str);
	string tmp;
	while (getline(istr, tmp, ',')) {
		row.push_back(tmp);
	}
}

int main() 
{
	fstream fin;
	fin.open("customers.csv");
	if (!fin.good()) throw "I/O error";
	map<string, string> customer;
	string a,b;
	vector<string> v;
	while (fin.good())
	{
		string s;
		getline(fin,s);
		parse_line(s,v);
	}
	fin.close();
	for (int i=0; i<v.size()/sizeof(string); i++)
	{
		customer.insert(make_pair(v[0+21*i],v[18+21*i]));
	}
	v.clear();
	do 
	{
		cout<<"Enter the lower and upper values of the range (X to quit): "<<endl;
		getline(cin,a);
		if (a=="X" || a=="x")
		{
			cout<<"Exiting..."<<endl;
			break;
		}
		getline(cin,b);
		map<string, string>::iterator item = customer.find(a);
		map<string, string>::iterator end = customer.find(b);
		cout<<"The customers in this range are:"<<endl;
		cout<<fixed;
		cout<<setprecision(2);
		for (; item != end; ++item)
			cout <<setw(20)<< item->first <<": $"<< stod(item->second) << endl;	
		cout <<setw(20)<< end->first <<": $"<< stod(end->second) << endl;	
		}while (a!="X" && a!="x");
}
//1095-WGNGG 
//1098-KFQEC