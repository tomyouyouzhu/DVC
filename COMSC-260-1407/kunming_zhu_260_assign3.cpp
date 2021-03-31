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


int main()
{
	cout<<addhex("1E","F")<<endl;
	
	cout<<"binary 1101 + 1000 = "<<addbin("1101", "1000")<<endl;   //you should get 10101
	cout<<"binary 11000 + 1011 = "<<addbin("11000", "1011")<<endl; //you should get 100011
	cout<<"binary 11111111 + 1 = "<<addbin("11111111", "1")<<endl; //you should get 100000000
	cout<<"binary 101010 + 10 = "<<addbin("101010", "10")<<endl<<endl; //you should get 101100
	
	cout<<"hexadecimal A4 + A5 = "<<addhex("A4", "A5")<<endl;  //you should get 149
	cout<<"hexadecimal 2B + C = "<<addhex("2B",  "C")<<endl;    //you should get 37
	cout<<"hexadecimal FABC + 789 = "<<addhex("FABC", "789")<<endl;  //you should get 10245
	cout<<"hexadecimal FFFFFF + FF = "<<addhex("FFFFFF", "FF")<<endl<<endl; //you should get 10000FE 
	

	system("PAUSE");
	return 0;
	
}


string addbin(string bin1, string bin2)
{
	if (bin1=="0")
		return bin2;
	if (bin2=="0")
		return bin1;
	vector<char> a,b,c;
	int x=bin1.size()-1;
	int y=bin2.size()-1;
	int carry=0;
	if (x>y)
	{
		for (int i=0; i<=x; i++)
		{
			a.push_back(bin1[i]);
		}
		for (int i=0; i<x-y; i++)
		{
			b.push_back('0');
		}
		for (int i=0; i<=y; i++)
		{
			b.push_back(bin2[i]);
		}
	}
	else if (x<y)
	{
		for (int i=0; i<=y; i++)
		{
			b.push_back(bin1[i]);
		}
		for (int i=0; i<y-x; i++)
		{
			a.push_back('0');
		}
		for (int i=0; i<=x; i++)
		{
			a.push_back(bin1[i]);
		}
	}
	else 
	{
		for (int i=0; i<=x; i++)
		{
			a.push_back(bin1[i]);
			b.push_back(bin2[i]);
		}
	}
	for (int i=a.size()-1; i>=0; i--)
	{
		if(a[i]+b[i]+carry-48<=49)
		{
			c.push_back(a[i]+b[i]+carry-48);
			carry=0;
		}
		else 
		{
			c.push_back((a[i]+b[i]+carry-48-48)%2+48);
			carry=1;
		}
	}
	if (carry==1)
	{
		c.push_back('1');
	}
	string str(c.begin(),c.end());
	reverse(str.begin(),str.end());
	return str;
}

string addhex(string hex1, string hex2)
{
	if (hex1=="0")
		return hex2;
	if (hex2=="0")
		return hex1;
	vector<char> a,b,c;
		int x=hex1.size()-1;
		int y=hex2.size()-1;
		int carry=0;
		if (x>y)
		{
			for (int i=0; i<=x; i++)
			{
				a.push_back(hex1[i]);
			}
			for (int i=0; i<x-y; i++)
			{
				b.push_back('0');
			}
			for (int i=0; i<=y; i++)
			{
				b.push_back(hex2[i]);
			}
		}
		else if (x<y)
		{
			for (int i=0; i<=y; i++)
			{
				b.push_back(hex1[i]);
			}
			for (int i=0; i<y-x; i++)
			{
				a.push_back('0');
			}
			for (int i=0; i<=x; i++)
			{
				a.push_back(hex1[i]);
			}
		}
		else 
		{
			for (int i=0; i<=x; i++)
			{
				a.push_back(hex1[i]);
				b.push_back(hex2[i]);
			}
		}
		for (int i=a.size()-1; i>=0; i--)
		{
			if (a[i]<=57 && b[i]<=57)
			{
				if ((carry+a[i]+b[i]-96)/16==0 && (carry+a[i]+b[i]-96)<10)
				{
					c.push_back(carry+a[i]+b[i]-96+48);
					carry=0;
				}
				else if ((carry+a[i]+b[i]-96)/16==0 && (carry+a[i]+b[i]-96)>=10 && (carry+a[i]+b[i]-96)<16)
				{
					c.push_back(carry+a[i]+b[i]-96+55);
					carry=0;
				}
				else if  ((carry+a[i]+b[i]-96)/16==1 && (carry+a[i]+b[i]-96)%16<10)
				{
					c.push_back((carry+a[i]+b[i]-96)%16+48);
					carry=1;
				}
				else 
				{
					c.push_back((carry+a[i]+b[i]-96)%16+55);
					carry=1;
				}
			}
			else if (a[i]>=65 && b[i]>=65)
			{
				if ((carry+a[i]+b[i]-110)%16<10)
				{
					c.push_back((carry+a[i]+b[i]-110)%16+48);
					carry=1;
				}
				else
				{
					c.push_back((carry+a[i]+b[i]-110)%16+55);
					carry=1;
				}
			}
			else 
			{
				if ((carry+a[i]+b[i]-48-55)/16==0 && (carry+a[i]+b[i]-48-55)<10)
				{
					c.push_back(carry+a[i]+b[i]-48-55+48);
					carry=0;
				}
				else if ((carry+a[i]+b[i]-48-55)/16==0 && (carry+a[i]+b[i]-48-55)>=10 && (carry+a[i]+b[i]-48-55)<16)
				{
					c.push_back(carry+a[i]+b[i]-48-55+55);
					carry=0;
				}
				else if  ((carry+a[i]+b[i]-48-55)/16==1 && (carry+a[i]+b[i]-48-55)%16<10)
				{
					c.push_back((carry+a[i]+b[i]-48-55)%16+48);
					carry=1;
				}
				else 
				{
					c.push_back((carry+a[i]+b[i]-48-55)%16+55);
					carry=1;
				}
			}
		}
		if (carry==1)
		{
			c.push_back('1');
		}
		string str(c.begin(),c.end());
		reverse(str.begin(),str.end());
		return str;
}
