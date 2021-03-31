//Objective:  la04b
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>

using namespace std;
int main() 
{
	int input;
	cout<<"Enter a number to convert [1-5]:";
    cin>>input;
	switch (input)
	{
		case 1: cout<<input<<" converted is I.";
		break;
		case 2: cout<<input<<" converted is II.";
		break;
		case 3: cout<<input<<" converted is III.";
		break;
		case 4: cout<<input<<" converted is IV.";
		break;
		case 5: cout<<input<<" converted is V.";
		break;
		default: break;
	}
}