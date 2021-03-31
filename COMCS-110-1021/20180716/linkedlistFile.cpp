//Objective:  linkedfilelist
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries

#include <fstream>
#include <iostream>

#include <iomanip>
using namespace std;

//Programmer defined data types
struct List
{
  double score;
  List* node;
};

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information

      double average (double sum,int n)

      {

        double ave=sum/n;

        ave=sum/n;

        return ave;

      }

      double goodscore (double av, double num)

      {

        int great=0;

        if (num > av)

        {

          great=great+1;

          return great;

        }

        else
 
       {

          great=great;

          return great;

        }

      }

      double badscore (double av, double num)

      {

        int les=0;

        if (num < av)

        {

          les=les+1;

          return les;

        }

        else
 
       {

          les=les;

          return les;

        }

      }

      double highest (double num, double maxScore)

      {

        if (num>maxScore)

          maxScore=num;

        return maxScore;

      }

      double lowest (double num, double minScore)

      {

        if (num<minScore)

          minScore=num;

        return minScore;

      }




 //main program
  
int main()

{

    //Data

    string line;// = a line from the input file

    double averagescore;// calculated average of all the scores from the input file

    int count;// number of scores in the input file

    int maxScore;// highest score of all the scores in the input file

    int minScore;//lowest score of all the scores in the input file

    int nGreater;// number of scores greater than the average score

    
int hun;//100 number

    int nlesser;//less than average
    double sum=0;//sum of scores
    int greater;//check greater than average
    int less;
//check less than average
    string objective = "avgfile"; // program objective

    introduction(objective);
 //user information

  //open file

   ifstream fin;
 
  fin.open("scores.txt");
 
  if (!fin.good()) throw "I/O error";
 
    //  1. determine how many scores are in the input file

   count=0;

   while (getline(fin,line))

   {

      count++;

   }

   if (count==0)

   {

      cout <<"Sorry the file is empty."<<endl;

      return 0;

   }
 
  fin.close();
   fin.open("scores.txt");
 
  if (!fin.good()) throw "I/O error";

   List* start=0;
   count=0;
 
  while (fin.good())
 
  {
      List* aList=new List;
      fin>>aList->score;
      fin.ignore(1000,10);
      if (aList->score>0 && aList->score<=100)
      {
        aList->node=start;
        start=aList;
        count++;
      }
 
  } // while
 
  fin.close();

   List* p;
   cout<<"scores ";
   for(p=start; p ;p=p->node)
   {
     cout<<p->score<<' ';
   }
   cout<<endl;
   for (p=start;p;p=p->node)
 
     sum=sum+p->score;

  
   averagescore=average(sum,count);
  
   nGreater=0;
 
   for (p=start;p;p=p->node)
 
   {
 
     greater=goodscore(averagescore,p->score);
 
     if (greater==1)
 
       nGreater++;
 
   }
 
   nlesser=0;
 
   for (p=start;p;p=p->node)
 
   {
 
     less=badscore(averagescore,p->score);
 
     if (less==1)
 
       nlesser++;
 
   }
 
   maxScore=0;
 
   for (p=start;p;p=p->node)
 
   {
 
     maxScore=highest(p->score, maxScore);
 
   }
 
   minScore=100;
 
   for (p=start;p;p=p->node)
 
   {
 
     minScore=lowest(p->score,minScore);
 
   }

   hun=0;

 
  for (p=start;p;p=p->node)

 
  {

 
    if (p->score==100)

       hun++;

 
  }

 
   cout.setf(ios::fixed|ios::showpoint);
 
   cout << setprecision(2);
 
   cout <<"The sum of scores is : "<<sum<<endl;
   cout<<"The average of "<< count << " scores is: "<< averagescore<< endl;
 
   cout<<"The highest score is: "<< maxScore <<endl;
 
   cout<<"The lowest score is: "<< minScore <<endl;
 
   cout<<"The number of scores greater than the average is: "<< nGreater<<endl;
 
   cout<<"The number of scores less than the average is: "<< nlesser<<endl;

   cout<<"The number of 100 is: "<< hun<<endl;

}//main


// introduction

void introduction(string obj)

{
 
       // data
 
       // obj is the program objective from main program 


  //introduction
  cout << "Objective: linkedlistfile ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

