//Objective:  avgfile
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information
void input(double score);

//  4. use a value returning function to calculate the average score

    double average (double sum,int n)

    {

      double ave=sum/n;

      ave=sum/n;

      return ave;

    }

//  5. use a value returning function to calculate the number of scores greater than the average

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

//  6. use a value returning function to find the highest score

    double highest (double num, double maxScore)

    {

      if (num>maxScore)

        maxScore=num;

      return maxScore;

    }

//  7. use a value returning function to find the lowest score

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

  string name;

  string line;// = a line from the input file

  double averagescore;// calculated average of all the scores from the input file

  int count;// number of scores in the input file

  int totalScores;// sum of all the scores in the input file

  int maxScore;// highest score of all the scores in the input file

  int minScore;//lowest score of all the scores in the input file

  int nGreater;// number of scores greater than the average score

  int i;// indice for traversing each element in the array

  double temp;

  double sum=0;

  int greater;
  string objective = "avgfile"; // program objective
  introduction(objective); //user information
//open file

  cout<<"Pleas input the file name: ";

  getline(cin,name);

  ifstream fin;

  fin.open(name.c_str());

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
//  2. create a dynamically sized array for that many scores

   double* scores=new double [count];// holds all the scores read from the input file, each score is betwen 0-100

   fin.open(name.c_str());

   for (i=0; i<count; i++)

   {

      fin>>scores[i];

      fin.ignore(1000,10);

   }

   fin.close();

   cout <<"The scores from the file "<< name<< " are: ";

    for (i=0; i<count; i++)

      cout <<scores[i]<< ' ';

    cout <<endl;

    for (i=0; i<count; i++)
 
     sum=sum+scores[i];


    for (i=0; i<count; i++)

    {

      averagescore=average(sum,count);

    }

    nGreater=0;

    for (i=0; i<count; i++)

    {

      greater=goodscore(averagescore,scores[i]);

      if (greater==1)

        nGreater++;

    }

    maxScore=0;

    for (i=0; i<count; i++)

    {

      maxScore=highest(scores[i], maxScore);

    }

    minScore=100;

    for (i=0; i<count; i++)

    {

      minScore=lowest(scores[i],minScore);

    }

    cout.setf(ios::fixed|ios::showpoint);

    cout << setprecision(2);

    cout<<"The average of "<< count << " scores is: "<< averagescore<< endl;

    cout<<"The highest score is: "<< maxScore <<endl;

    cout<<"The lowest score is: "<< minScore <<endl;

    cout<<"The number of scores greater than the average is: "<< nGreater<<endl;

}//main


//  3. use a void function to input the scores with an input parameter of the dynamically sized array


// introduction
void introduction(string obj)
{
  // data
  // obj is the program objective from main program 

  //introduction
  cout << "Objective: avgfile ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

