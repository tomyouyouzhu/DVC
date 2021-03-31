//Objective:  sortfilelist
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
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj); //user information

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
    
    int hun;//100 number

    int nlesser;

    int i;// indice for traversing each element in the array

    double temp;

    double sum=0;

    int greater;

    int less;

    int j;

    int badnum;

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

   int MAX_SCORES=count; // list capacity
 
  int nScores = 0; // initially empty
 
  double score[MAX_SCORES];
   fin.open("scores.txt");
 
  if (!fin.good()) throw "I/O error";
 
  while (fin.good())
 
  {
 
      // read a score from the file
 
     int aScore; // temporary storage for new score

      fin >> aScore;
 
     fin.ignore(1000, 10);
 
    
      // add new score to list, if list is not full
 
      if (nScores < MAX_SCORES)
 
        score[nScores++] = aScore;
 
  } // while
 
  fin.close();

   badnum=0;
 
   for (i=0; i<count; i++)

   {
 
     if (score[i]<0 || score[i]>100)
 
     {
 
       badnum++;
 
       for (j=i+1; j<count; j++)
 
       {
 
         temp=score[j];
 
         if (temp>=0&&temp<=100)
 
         {
 
           score[i]=temp;
 
         }
 
       }
 
     }
 
   }
 
   fin.close();

   count=count-badnum;
 
   cout<<badnum<<endl;
 
   cout<< count<< endl;
 
   cout <<"The unsorted scores from the file are: ";
 
   for (i=0; i<count; i++)
 
     cout <<score[i]<< ' ';
 
   cout <<endl;
 
   for (i=0; i<count; i++)
 
   {
 
     for (j=i+1; j<count; j++)
 
     {
 
       if (score[i]<score[j])
 
       {
 
         temp=score[i];
 
         score[i]=score[j];
 
         score[j]=temp;
 
       }
 
     }
 
   }
 
   cout <<"The sorted scores from the file are: ";
 
   for (i=0; i<count; i++)
 
     cout <<score[i]<< ' ';
 
   cout <<endl;
 
   for (i=0; i<count; i++)
 
     sum=sum+score[i];

 
     for (i=0; i<count; i++)
 
     {
 
       averagescore=average(sum,count);
 
     }
 
     nGreater=0;
 
     for (i=0; i<count; i++)
 
     {
 
       greater=goodscore(averagescore,score[i]);
 
       if (greater==1)
 
         nGreater++;
 
     }
 
     nlesser=0;
 
     for (i=0; i<count; i++)
 
     {
 
       less=badscore(averagescore,score[i]);
 
       if (less==1)
 
         nlesser++;
 
     }
 
     maxScore=0;
 
     for (i=0; i<count; i++)
 
     {
 
       maxScore=highest(score[i], maxScore);
 
     }
 
     minScore=100;
 
     for (i=0; i<count; i++)
 
     {
 
       minScore=lowest(score[i],minScore);
 
     }
    
     hun=0;
 
     for (i=0; i<count; i++)
 
     {
 
       if (score[i]==100)
          hun++;
 
     }

 
     cout.setf(ios::fixed|ios::showpoint);
 
     cout << setprecision(2);
 
     cout<<"The average of "<< count << " scores is: "<< averagescore<< endl;
 
     cout<<"The highest score is: "<< maxScore <<endl;
 
     cout<<"The lowest score is: "<< minScore <<endl;
 
     cout<<"The number of scores greater than the average is: "<< nGreater<<endl;
 
     cout<<"The number of scores less than the average is: "<< nlesser<<endl;
    
     cout<<"The number of 100 is: "<< hun<<endl;

}//main


//  3. use a void function to input the scores with an input parameter of the dynamically sized array


// introduction

void introduction(string obj)

{
 
       // data
 
       // obj is the program objective from main program 


  //introduction
  cout << "Objective: sortfilelist ";
  cout << obj << endl; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
} //void introduction

