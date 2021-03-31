//Objective:  assign2
//Name: Kunming Zhu
//Course: COMSC-260-1407

// NOTE: The ONLY files that should be #included for this assignment are iostream, vector, and string
// No other files should be #included

#include <iostream>
#include <vector>
#include <string>

// NOTE: The ONLY files that should be #included for this assignment are iostream, vector, and string
// No other files should be #included


using namespace std;

int bin_to_dec(string);
string dec_to_bin(int);
int hex_to_dec(string);  
string dec_to_hex(int);  



int main() 
{
	
	cout<<"10000011 binary = "<<bin_to_dec("10000011")<<" decimal\n"; // you should get 131
	cout<<"01010101 binary = "<<bin_to_dec("01010101")<<" decimal\n"; // you should get 85
	cout<<"1111111111111111 binary = "<<bin_to_dec("1111111111111111")<<" decimal\n"; // you should get 65,535
	cout<<"0111111111111111 binary = "<<bin_to_dec("0111111111111111")<<" decimal\n\n"; // you should get 32,767
	
	cout<<"255 decimal = "<<dec_to_bin(255)<<" binary\n"; //you should get 11111111
	cout<<"65532 decimal = "<<dec_to_bin(65532)<<" binary\n"; //you should get 1111111111111100
	cout<<"12 decimal = "<<dec_to_bin(12)<<" binary\n"; //you should get 1100
	cout<<"1000000 decimal = "<<dec_to_bin(1000000)<<" binary\n\n"; //you should get 11110100001001000000
	
	cout<<"ABC hexadecimal = "<<hex_to_dec("ABC")<<" decimal\n"; //you should get 2,748
	cout<<"F5 hexadecimal = "<<hex_to_dec("F5")<<" decimal\n"; //you should get 245
	cout<<"1234 hexadecimal = "<<hex_to_dec("1234")<<" decimal\n"; //you should get 4,660
	cout<<"FDECB hexadecimal = "<<hex_to_dec("FDECB")<<" decimal\n\n"; //you should get 1,040,075
	
	cout<<"512 decimal = "<<dec_to_hex(512)<<" hexadecimal\n"; //you should get 200
	cout<<"5000 decimal = "<<dec_to_hex(5000)<<" hexadecimal\n"; //you should get 1388
	cout<<"900000 decimal = "<<dec_to_hex(900000)<<" hexadecimal\n"; //you should get DBBA0
	cout<<"65525 decimal = "<<dec_to_hex(65525)<<" hexadecimal\n\n"; //you should get FFF5
	
	system("PAUSE");
	return 0;

}

// Converts any UNsigned binary number to decimal

int bin_to_dec(string s) 
{
	int sum=0;
	vector<char> number;
	for (int i=0; i<s.size(); i++)
	{
		number.push_back(s[i]);
	}
	for (int i=0; i<s.size(); i++)
	{
		int a;
		int b=1;
		a=number[i]-48;
		if (i!=s.size()-1)
		{
			for (int j=i; j<s.size()-1; j++)
			{
				b=b*2;
			}
		}
		sum=sum+a*b;
	}
	return sum;
}	

//Converts any non-negative decimal number to binary

string dec_to_bin(int n)  
{
	vector<char> number;
	do 
	{
		char a=n%2+48;
		number.push_back(a);
		n=n/2;
	} while (n/2!=0);
	if (n%2==1)
		number.push_back(49);
	string str(number.begin(),number.end());
	reverse(str.begin(),str.end());
	return str;
}


//Converts any UNsigned hexadecimal number to decimal

int hex_to_dec(string s) 
{
	int sum=0;
	vector<char> number;
	for (int i=0; i<s.size(); i++)
	{
		number.push_back(s[i]);
	}
	for (int i=0; i<s.size(); i++)
	{
		int a;
		int b=1;
		if (number[i]>=48 && number[i]<=57)
		{
			a=number[i]-48;
		}
		if (number[i]>=65 && number[i]<=70)
		{
			a=number[i]-55;
		}
		if (i!=s.size()-1)
		{
			for (int j=i; j<s.size()-1; j++)
			{
				b=b*16;
			}
		}
		sum=sum+a*b;
	}
	return sum;
}	


//Converts any non-negative decimal number to hexadecimalConverts any non-negative decimal number to hexadecimal

string dec_to_hex(int n)  
{
	vector<char> number;
	do 
	{
		char a;
		if (n%16<10)
		{
			a=n%16+48;
		}
		if (n%16>9)
		{
			a=n%16+55;
		}
		number.push_back(a);
		n=n/16;
	} while (n/16!=0);
	if (n%16>0)
	{
		char a;
		if (n%16<10)
		{
			a=n%16+48;
		}
		if (n%16>9)
		{
			a=n%16+55;
		}
		number.push_back(a);
	}
	string str(number.begin(),number.end());
	reverse(str.begin(),str.end());
	return str;
}


