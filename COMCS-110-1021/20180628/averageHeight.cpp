//Objective:  Average height
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
  double sum; // sume of height
  double height; // height of a person
  int count; // number of people
  double averageheight; // average height of people
  sum=0; // sum of height at beginning 
  count=0; // number of people at beginning
  int endword=0; // input 0 to end the program and output the result

  // introduction
  cout << "Objective: avereage height.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


  while (true)
  {  
    cout << "Hello everyone, we are going to get the average height of people in the room." << endl;
    cout << "So please input your height number by inch (from 1 to 100)." << endl;
    cout << "If there are no people in the room, or everyone does input the height." << endl;
    cout << "please input 0 to end this program, thanks. Now, please input your height:";
    cin >> height; 

    if (height>=100||height<0)
    {
      cout << "Please input height from 1 to 100 inches. " << endl;
      sum=sum-height;
      count=count-1;
    } // loop for wrong input
    sum=sum+height;
    count=1+count;
    if (height==0)
    {
      count=count-1;
      averageheight=sum/count;
      cout << "Thanks for your help, the sum of your height is " << endl;
      cout << sum << " inches." << ", and there are " << count << " people in the room, so the average height of you is: " << endl;
      cout << averageheight << " inches." <<endl;
      cout << " See you!"; 
      break;
    } // loop for input
  } // loop for calculate
  if (sum==0||count==0)
  {
    cout << " There are no people in the room.";
  } //for 0 people
}//main
