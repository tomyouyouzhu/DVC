//Objective:  Lab#3
//Name: Kunming Zhu
//Course: COMSC- 210

#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;

class Bag
{
	private:
		vector<int> x;
		vector<int> y;
	public:
		void insert (int a, int b)
		{
			if (a==1)
			{
				x.push_back(b);
			}
			else 
			{
				y.push_back(b);
			}
		}	
		void check() const
		{
			int i=0;
			int j=y.size()-1;
			int count=1;
			while (i<x.size() && j>=0)
			{
				if (x[i]!=y[j])
					count++;
				i++;
				j--;				
			}
			if (count==1)
				cout<<"stack"<<endl;
			else 
				cout<<"not stack"<<endl;
		}
};

void stackornot();

int main() 
{
	stackornot();
}

void stackornot()
{
	string name;
		cout<<"Enter the file name: ";
		getline(cin,name);
		ifstream fin;
		fin.open(name.c_str());
		if (!fin)
		{
			cout<<"Failed to open source file."<<endl;
		}
		else 
		{
			while(fin.good())
			{
				Bag z;
				int n;
				fin>>n;
				for (int i=0; i<n; i++)
				{
					int a,b;
					fin>>a>>b;
					z.insert(a,b);
				}
				z.check();
			}
			fin.close();
		}
}