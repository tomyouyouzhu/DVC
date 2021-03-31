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



string multbin(string bin1, string bin2)
{
	if (bin2.size()>bin1.size())
		return multbin(bin2, bin1);
	if (bin2=="0" || bin1=="0")
		return "0";
	else if (bin2=="1")
		return bin1;
	else if (bin1=="1")
		return bin2;
	else 
	{
		string sum="0";
		string count="0";
		do
		{
			sum=addbin(sum,bin1);
			count=addbin(count,"1");
		}while(count!=bin2);
		return sum;
	}
}

string multhex(string hex1, string hex2)
{
	if (hex2.size()>hex1.size())
		return multhex(hex2,hex1);
	string sum="0";
	string count="0";
	if (hex2=="0" || hex1=="0")
		return "0";
	else if (hex2=="1")
		return hex1;
	else if (hex1=="1")
		return hex2;
	else 
	{
		do 
		{
			sum=addhex(sum,hex1);
			count=addhex(count,"1");
		} while (count!=hex2);
		return sum;
	}
}

