//Objective:  hw17
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

struct node
{
	int x;
	node * next;
};

void append(node *&,int);
void find(node *,int);
void clear(node *&);
void print(node *);
void remove(node *&,int);

int main() 
{
	node * head=nullptr;
	int size;
	int h;
	cout<<"How many numbers do you want to enter? ";
	cin>>size;
	int * a=new int[size];
	cout<<"Please enter numbers: ";
	for (int i=0; i<size; i++)
	{
		cin>>a[i];
		append(head, a[i]);
	}
	delete [] a;
	print (head);
	cout<<"Please enter the number you want to search: ";
	cin>>h;
	find(head,h);
	cout<<"Please enter the number you want to delete: ";
	cin>>h;
	remove(head,h);
	print(head);
	clear(head);
	/* for testing the clear function
	cout<<"TEST"<<endl;
	print(head);
	*/
}

void append(node *& a, int b)
{
	node * n=new node{b,nullptr};
	node * m=a;
	if (a==nullptr)
	{
		a=n;
	}
	else 
	{
		while (m->next!=nullptr)
		{
			m=m->next;
		}	
		m->next=n;
	}
}

void find(node * a, int b)
{
	while (a!=nullptr)
	{
		if (a->x==b)
		{
			cout<<"Found "<<b<<" in the list!"<<endl;
		}
		a=a->next;
	}
}

void print(node *a)
{
	/* for testing the clear funtion
	if (a==nullptr)
	{
		cout<<"EMPTY!"<<endl;
	}
	*/
	while (a!=nullptr)
	{
		cout<<a->x<<" ";
		a=a->next;
	}
	cout<<endl;
}

void remove(node *& a, int b)
{
	node * y=a;
	node * z=nullptr;
	if (a!=nullptr && a->x==b)
	{
		a=a->next;
		delete y;
	}
	else 
	{
		while (y!=nullptr && y->x!=b)
		{
			z=y;
			y=y->next;
		}
		if (y!=nullptr)
		{	
			if (y->x==b)
			{
				z->next=y->next;
				delete y;
			}
		}
	}
	z=nullptr;
}

void clear(node *& a)
{
	while (a!=nullptr)
	{	
		node * n=a;
		a=a->next;
		delete n;
	}
	a=nullptr;
}