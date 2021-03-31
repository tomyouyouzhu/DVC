//Objective:  la17a
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>
using namespace std;

struct node
{
	char x;
	node * next;
};

void print(node *);

int main() 
{
	node * head=nullptr;
	node * n= new node;	
	n->x='z';
	n->next=nullptr;
	head=n;
	print(head);
	delete head;
}

void print(node * a)
{
	while (a!=nullptr)
	{
		cout<<a->x<<endl;
		a=a->next;
	}
}