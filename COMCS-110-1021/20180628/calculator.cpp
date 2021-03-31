//Objective:  calculator
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
  double number1; // the first nunmber
  double number2; // the second number
  int todo; // addition subtraction multuplcation division
  double number3; // result
  char C; //choice



  // introduction
  cout << "Objective: calculator.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


  cout << "I am a calculator, but I can only do addition, subtraction, multiplcation, and division." << endl;
  cout << "Pleas input two different numbers one by one, and I will help you to calculate them. Waring, the order of these two numbers is impotrtant." <<endl;
  
  do{
    cout << "Now, please input the first number:";
    cin >> number1;
    cout << "Please input the second number:";
    cin >> number2;
    cout << "Please tell me what do you want to do [1= addition  2= subtraction  3= multiplcation  4= division]:";
    cin >> todo;

    if (todo==1)
    {
      number3=number1+number2;
      cout << "The sum of " << number1 << " and " << number2 << " is " << number3 << endl;
      cout << "Thanks" << endl;
    } // loop for todo=1
    else if (todo==2)
    {
      number3=number1-number2;
      cout << "The subtraction of " << number1 << " and " << number2 << " is " << number3 << endl;
      cout << "Thanks" << endl;
    } // loop for todo=2
    else if (todo==3)
    {
      number3=number1*number2;
      cout << "The multiplcation  of " << number1 << " and " << number2 << " is " << number3 <<endl;
      cout << "Thanks" << endl;
    } // loop for todo=3
    else if (todo==4)
    {
      number3=number1/number2;
      cout << "The division of " << number1 << " and " << number2 << " is " << number3 << endl;
      cout << "Thanks" << endl;
    } // loop for todo=4

    else
 
   {

      cout << "Please input 1,2,3,or4." << endl;

    } // loop for wrong input


    if (C=='N'||C=='n')

      break;

 do{

    cout << "Do you want another calculation?  [Y=yes or N=no]:";

    cin >> C;

    if (C!='Y'&&C!='y'&&C!='N'&&C!='n')
      cout << "Please input Y or N." << endl;
    }while (C!='Y'&&C!='y'&&C!='N'&&C!='n');

 
// loop for wrong choice
  }while (C=='Y'||C=='y');  //loop for if want another calculation 
  
}//main
