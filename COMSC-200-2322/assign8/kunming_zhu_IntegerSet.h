#include <vector>
#include <string>

class IntegerSet
{
	private:
		int MAX = 101;
		std::vector <std::string> num;
	public:
		IntegerSet();
		IntegerSet(int arr[], int);
		IntegerSet unionOfSets(IntegerSet) const;
		IntegerSet intersectionOfSets(IntegerSet) const;
		void insertElement(int);
		void deleteElement(int);
		void printSet() const;
		bool isEqualTo(IntegerSet) const;
		std::string getNum(int) const;
		void setNum(int);
		void inputSet();
};

IntegerSet::IntegerSet()
{
	for (int i = 0; i < MAX; i++)
	{
		num.push_back("false");
	}
}
IntegerSet::IntegerSet(int arr[], int size)
{
	for (int i = 0; i < MAX; i++)
	{
		num.push_back("false");
	}
	for (int i = 0; i < size; i++)
	{
		insertElement(arr[i]);
	}
}
IntegerSet IntegerSet::unionOfSets(IntegerSet a) const
{
	IntegerSet c;
	for (int i = 0; i < MAX; i++)
	{
		if (num[i] == "true" || a.getNum(i) == "true")
			c.setNum(i);
	}
	return c;
}
IntegerSet IntegerSet::intersectionOfSets(IntegerSet a) const
{
	IntegerSet c;
		for (int i = 0; i < MAX; i++)
		{
			if (a.getNum(i) == num[i] && num[i] == "true")
				c.setNum(i);
		}
		return c;
}
void IntegerSet::insertElement(int a)
{
	if (a >= 0 && a < 101)
		num[a] = "true";
	else 
		std::cout<<"Invalid insert attempted!\n";
}
void IntegerSet::deleteElement(int a)
{
	num[a] = "false";
}
void IntegerSet::printSet() const
{
	std::cout<<"{ ";
	for (int i = 0; i < MAX; i++)
	{
		if (num[i] == "true")
			std::cout<<i<<" ";
	}
	std::cout<<"}\n";
}
bool IntegerSet::isEqualTo(IntegerSet a) const
{
	for(int i = 0; i < MAX; i++)
	{
		if (a.getNum(i) != num[i])
			return false;
	}
	return true;
}
std::string IntegerSet::getNum(int a) const
{
	return num[a];
}
void IntegerSet::setNum(int a)
{
	num[a] = "true";
}
void IntegerSet::inputSet()
{
	int a;
	do 
	{
		std::cout<<"Enter an element (-1 to end): ";
		std::cin>>a;
		if(a >= 0 && a <= 100) 
			num[a] = "true";
		if (a == -1)
			break;
	}while (a != -1);
	std::cout<<"entry complete\n";
}