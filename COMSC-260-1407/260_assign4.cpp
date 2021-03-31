// NOTE: The ONLY files that should be #included for this assignment are iostream, vector, and string
// No other files should be #included

#include <iostream>
#include <vector>
#include <string>

// NOTE: The ONLY files that should be #included for this assignment are iostream, vector, and string
// No other files should be #included


using namespace std;


string addbin(string, string);
string addhex(string, string);

string multbin(string, string);
string multhex(string, string);

int main()
{
	
	cout<<"binary 10001 * 11 = "<<multbin("10001", "11")<<endl; //you should get 110011
	cout<<"binary 100 * 110001 = "<<multbin("100", "11001")<<endl; //you should get 1100100
	cout<<"binary 110 * 1010 = "<<multbin("110", "1010")<<endl; //you should get 111100
	cout<<"binary 11111111 * 10 = "<<multbin("11111111", "10")<<endl; //you should get 111111110
	cout<<"binary 10101010 * 1 = "<<multbin("10101010", "1")<<endl;  //you should get 10101010
	cout<<"binary 0 * 11110000 = "<<multbin("0", "11110000")<<endl<<endl; //you should get 0
	
	cout<<"hexadecimal F * A = "<<multhex("F", "A")<<endl; //you should get 96
	cout<<"hexadecimal 1A * 5 = "<<multhex("1A", "5")<<endl; //you should get 82
	cout<<"hexadecimal FF * 2 = "<<multhex("FF", "2")<<endl; //you should get 1FE
	cout<<"hexadecimal 104 * 3 = "<<multhex("104", "3")<<endl; //you should get 30C
	cout<<"hexadecimal FABC * 1 = "<<multhex("FABC", "1")<<endl; //you should get FABC
	cout<<"hexadecimal 0 * EFDCAB = "<<multhex("0", "EFDCAB")<<endl<<endl; //you should get 0
	
			
	system("PAUSE");
	return 0;
}



string addbin(string bin1, string bin2)
{
	
	// FROM ASSIGNMENT 3
	// FROM ASSIGNMENT 3
	// FROM ASSIGNMENT 3
}

string addhex(string hex1, string hex2)
{
	// FROM ASSIGNMENT 3
	// FROM ASSIGNMENT 3
	// FROM ASSIGNMENT 3
	
}

string multbin(string bin1, string bin2)
{
	
	// IMPLEMENT THIS FUNCTION
	// IMPLEMENT THIS FUNCTION
	// IMPLEMENT THIS FUNCTION
	
}

string multhex(string hex1, string hex2)
{
	
    // IMPLEMENT THIS FUNCTION
	// IMPLEMENT THIS FUNCTION
	// IMPLEMENT THIS FUNCTION
	
}

