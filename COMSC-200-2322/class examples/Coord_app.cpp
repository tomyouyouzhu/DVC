#include "Coord.h"
#include <iostream>

using namespace std;


int main()
{/*
	Coord c1(1, 2), c2(3, 4), c3(5, 6), c4(7, 8), c5;


	cout << "Enter two coordinates (each x and y value should be separated by a space): ";

	cin >> c1 >> c2;

	cout << c1 << c2;

	Coord co1;
	
	cout << co1 << endl;

	c1 += c2 += c3;

	cout << c1 << endl;


	cout << ++c1 << endl; //prefix

	cout << c1++ << endl; //postfix

	cout << c1 << endl;

	cout << -c1 << endl; //unary minus

	cout << c1 << endl;

	if (c1 == c2)
		cout << c1 << " and " << c2 << " are the same coordinate\n";
	

	if (c1 != c2)
		cout << "not equal";


	c5 = 1 + c1 + 2 + 3 + c2 + c3;

	cout << c5 << endl;

	c5 = 2 ^ c3 + 3 % c4;

	cout << c5 << endl;

	c5 = (2 ^ c3) + 3 % c4;

	cout << c5 << endl;

	c5 = 3 * c4 / c1 + 2 - 3 % 4 + c2 - 8;

	try
	{

		c5 = (c1 ^ 5) + 1 / 2 / c3 / 0;
	}

	catch (invalid_argument &ex)
	{
		cout << ex.what() << endl;

	}


	cout << "c1 ^ c2 = "<< c5 << endl;

	c5 = c1 + c2 ^ c3;

	cout << "c1 + c2 ^ c3 = " << c5 << endl;

	
	try
	{
		c5 = c1 / 0;
		cout << "c1 / 0" << c5 << endl;

	}

	catch(invalid_argument &ex)
	{ 
		cout << ex.what() << endl;

	}


	cout << c1 << c2 << c3 << c4 << c5 << endl;

	c1 = c2 = c3 = c4 = c5;
	cout << c1 << endl;*/
	
	Coord C1(93,44);
	cout<<C1--;
	cout<<C1;
	cout<<-C1;
	cout<<C1;

	system("PAUSE");
	return 0;
	
	
}
