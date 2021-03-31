#include <iostream>

using namespace std;

int main()
{
	int a[]={1,2,3,4};
	cout<<sizeof(a)<<endl;
	cout<<sizeof(int)<<endl;
	cout<<sizeof(a)/sizeof(int)<<endl;
}