//Objective:  hw13
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>

using namespace std;

class Number
{
	private:
	double * num;
	int size;
	public:
	Number(int);
	void getnumber(double, int);
	double gethigh() const;
	double getlow() const;
	double getave() const;
	~Number();
};

int main() 
{
	int size;
	cout<<"How many mubers do you want?: ";
	cin>>size;
	Number z(size);
	cout<<"Values in the Numbers object: ";
	for (int i=0; i<size; i++)
	{
		double input;
		cin>>input;
		z.getnumber(input, i);
	}
	cout<<"High Value in Numbers Object: "<<z.gethigh()<<endl;
	cout<<"Low Value in Numbers Object: "<<z.getlow()<<endl;
	cout<<"Average Value in Numbers Object: "<<z.getave()<<endl;
}

Number::Number(int a)
{
	num=new double [a];
	size=a;
}
Number::~Number()
{
	delete [] num;
}
void Number::getnumber(double a, int b)
{
	num[b]=a;
}
double Number::gethigh() const
{
	double high;
	for (int i=0; i<size; i++)
	{
		high=num[0];
		if (num[i]>high)
		{
			high=num[i];
		}
	}
	return high;
}
double Number::getlow() const
{
	double low;
	for (int i=0; i<size; i++)
	{
		low=num[0];
		if (num[0]<low)
		{
			low=num[i];
		}
	}
	return low;
}
double Number::getave() const
{
	double sum=0;
	for (int i=0; i<size; i++)
	{
		sum=sum+num[i];
	}
	return sum/size;
}