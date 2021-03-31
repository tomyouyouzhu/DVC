//Objective:  la04a
//Name: Kunming Zhu
//Course: COMSC-165-3015

#include <iostream>

using namespace std;
int main() 
{
	int score;
	cout<<"Enter the test score: ";
	cin>>score;
	if (score>=76)
	    cout<<"Your score is in the 4th quartile."<<endl;
	else if (score>=51)
	    cout<<"Your score is in the 3rd quartile."<<endl;
	else if (score>=26)
	    cout<<"Your score is in the 2nd quartile."<<endl;
	else 
		cout<<"Your score is in the 1st quartile."<<endl;
}