//Objective:  la17c
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

struct node
{
	char x;
	node * next;
};

void prepend (node *&, char);
void print (node *);
void clear(node*&);
int count_it(node *);

int main() 
{
	node * head=nullptr;
	prepend(head,'A');
	prepend(head,'B');
	prepend(head,'C');
	print(head);
	cout<<"There are "<<count_it(head)<<" nodes in the list.";
	clear(head);
}

void prepend(node *& a, char b)
{	
		node * n=new node{b,a};
		a=n;
}

void print(node * a)
{
	while(a!=0)
	{
		cout<<a->x<<endl;
		a=a->next;
	}
}

void clear(node *& a)
{
	while (a!=nullptr)
	{	
		node * n=a;
		a=a->next;
		delete n;
	}
}

int count_it(node *a)
{
	int n=0;
	while (a!=nullptr)
	{
		n++;
		a=a->next;
	}
	return n;
}