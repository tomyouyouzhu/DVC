//Objective:  mastermind

//Name: Kunming Zhu

//Course: COMSC-110-1021

//Compiler: TDM MinGW

//Editor: MS NotePad


//libraries

#include <ctime>

#include <fstream>

#include <cstdlib>

#include <iostream>

using namespace std;



//Programmer defined data types

//NONE



//Special compiler dependent definitions

//NONE



//global constants/variables

//NONE



//Programmer defined functions
void introduction(string obj); 
//user information



//main program
int main()

{

	//Data
	const int MAX_SCORE=100;

	int nScores=0;

	int score[MAX_SCORE];

	int aScore;

	int min=0;

	int i;

	int temp;

	int n1;//random number to choose colors

	int n2;//random number to choose colors

	int n3;//random number to choose colors

	int n4;//random number to choose colors

	char c1;//computer first
 
	char c2;//computer second

	char c3;//computer third

	char c4;//cpmputer fourth

	char h1;//human first

	char h2;//human second

	char h3;//human third

	char h4;//human fourth

	int cr=0;//computer red number

	int cg=0;//computer green number

	int cb=0;//computer blue number

	int cy=0;//computer yellow number

	int hr=0;//human red number

	int hg=0;//human green number

	int hb=0;//human blue number

	int hy=0;//human yellow number

	int rc=0;//the number of right color

	int rp=0;//the mumber of right position
 
	int p=0;//player guess times

	char cho;//player chocie

	string objective = "mastermind"; // program objective

	introduction(objective); //user information
//random colors for four postion

	ifstream fin;

	fin.open("mastermindScore.txt");

	if (!fin.good()) throw "I/O error";

	while (fin.good())

	{

	  fin>>aScore;

	  fin.ignore(1000,10);
  
       	  if (nScores<MAX_SCORE)

  	    score[nScores++]=aScore;

        }

	fin.close();

	min=10;

	for (i=0; i<nScores; i++)

	{

	  if (min>score[i])

		min=score[i];

	}

	if (min<0)

	  min=0;

	cout <<"The best score to date is "<<min<<' '<<endl;

    while (true)

    {

	srand(time(0));

	n1= rand() % 4;

	if (n1==0) c1='R';

	if (n1==1) c1='B';

	if (n1==2) c1='G';

	if (n1==3) c1='Y';

	n2= rand() % 4;

	if (n2==0) c2='R';

	if (n2==1) c2='B';

	if (n2==2) c2='G';

	if (n2==3) c2='Y';

	n3= rand() % 4;

	if (n3==0) c3='R';

	if (n3==1) c3='B';

	if (n3==2) c3='G';

	if (n3==3) c3='Y';

	n4= rand() % 4;

	if (n4==0) c4='R';

	if (n4==1) c4='B';

	if (n4==2) c4='G';

	if (n4==3) c4='Y';

	cr=0;

	if (c1=='R')
	cr=cr+1;

	if (c2=='R')
	cr=cr+1;

	if (c3=='R')
	cr=cr+1;

	if (c4=='R')
	cr=cr+1;

	cb=0;

	if (c1=='B')
    cb=cb+1;

	if (c2=='B')
	cb=cb+1;

	if (c3=='B')
	cb=cb+1;

	if (c4=='B')
	cb=cb+1;

	cy=0;

	if (c1=='Y')
	cy=cy+1;

	if (c2=='Y')
	cy=cy+1;

	if (c3=='Y')
	cy=cy+1;

	if (c4=='Y')
	cy=cy+1;

	cg=0;

	if (c1=='G')
	cg=cg+1;

	if (c2=='G')
	cg=cg+1;

	if (c3=='G')
	cg=cg+1;

	if (c4=='G')
	cg=cg+1;

	
cout <<"Welcome to the mastermind game, please guess four positions with Blue Yellow Red and Green colors." << endl;

	//cheat cout << c1 << c2 << c3 <<c4 << endl;

	//cheat cout << cr << cg << cb << cy << endl;

    do

    {
 
	cout <<"Please input your guess: ";

	cin >> h1;

	cin >> h2;

	cin >> h3;

	cin >> h4;

	cin.ignore(1000,10);

	while (h1!='R' && h1!='B' && h1!='Y' && h1!='G')

	{

	  cout <<"Please input your guess: ";

	  cin >> h1;

          cin >> h2;

	  cin >> h3;

	  cin >> h4;

	  cin.ignore(1000,10);

	}

	while (h2!='R' && h2!='B' && h2!='Y' && h2!='G')

	{

		cout <<"Please input your guess: ";

		cin >> h1;

		cin >> h2;

		cin >> h3;

		cin >> h4;

		cin.ignore(1000,10);

	}

	while (h3!='R' && h3!='B' && h3!='Y' && h3!='G')

	{

		cout <<"Please input your guess: ";

		cin >> h1;

		cin >> h2;

		cin >> h3;

		cin >> h4;

		cin.ignore(1000,10);

	}

	while (h4!='R' && h4!='B' && h4!='Y' && h4!='G')

	{

		cout <<"Please input your guess: ";

		cin >> h1;

		cin >> h2;

		cin >> h3;

		cin >> h4;

		cin.ignore(1000,10);

	}

	p=p+1;

	rp=0;

	if (c1==h1) 
		rp=rp+1;

	if (c2==h2) 
		rp=rp+1;

	if (c3==h3) 
		rp=rp+1;

	if (c4==h4) 
		rp=rp+1;

	hg=0;

	if (h1=='G')
	hg=hg+1;

	if (h2=='G')
	hg=hg+1;

	if (h3=='G')
	hg=hg+1;

	if (h4=='G')
	hg=hg+1;

	hy=0;

	if (h1=='Y')
	hy=hy+1;

	if (h2=='Y')
	hy=hy+1;

	if (h3=='Y')
	hy=hy+1;

	if (h4=='Y')
	hy=hy+1;

	hr=0;

	if (h1=='R')
	hr=hr+1;

	if (h2=='R')
	hr=hr+1;

	if (h3=='R')
	hr=hr+1;

	if (h4=='R')
	hr=hr+1;

	hb=0;

	if (h1=='B')
	hb=hb+1;

	if (h2=='B')
	hb=hb+1;

	if (h3=='B')
	hb=hb+1;

	if (h4=='B')
	hb=hb+1;

	rc=0;

	if (cr>=hr)
	rc=rc+hr;

	if (cr<hr)
	rc=rc+cr;

	if (cb>=hb)
	rc=rc+hb;

	if (cb<hb)
	rc=rc+cb;

	if (cy>=hy)
	rc=rc+hy;

	if (cy<hy)
	rc=rc+cy;

	if (cg>=hg)
	rc=rc+hg;

	if (cg<hg)
	rc=rc+cg;

	//cheat cout << hr << hy << hb << hg << endl;

	cout <<"The number of right color is " << rc << endl;

	cout <<"The number of right position is " << rp << endl;

	cout <<"You have " <<10-p<<" times left." <<endl;
  
	if (rp==4 && rc==4)

	{

		cout <<"Great, you win!" << endl;

		ofstream fout;

		fout.open("mastermindScore.txt",ios::app);

		if (!fout.good()) throw "I/O error";

		fout << p << endl;

		fout.close();

		return 0;

	}

} while (p<10);
  
	if (p==10)

	{

		cout <<"Sorry. The right answer is " <<c1 <<c2 <<c3 <<c4 <<endl;

	}

	p=0;

	ofstream fout;

	fout.open("mastermindScore.txt",ios::app);

	if (!fout.good()) throw "I/O error";

	fout << p << endl;

	fout.close();

	cout <<"Do you want to play more?";

	cin >> cho;

	cin.ignore(1000,10);

	if (cho=='N' || cho=='n') return 0;

}






}//main




// introduction

void introduction(string obj)

{

	// data

	// obj is the program objective from main program
 

	//introduction

	cout << "Objective: master ";

	cout << obj << endl;
 
	cout << "Programmer: Kunming Zhu\n";
 
	cout << "Editor(s) used: Notepad\n";
 
	cout << "Compiler(s) used: TDM MinGW\n"; 

	cout << "File: " << __FILE__ << endl;
 
	cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl;
 
} //void introduction

