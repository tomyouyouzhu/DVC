//Objective:  odometer
//Name: Kunming Zhu
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
using namespace std;

#ifdef _WIN32 
#include <windows.h> 
#else 
#include <unistd.h> 
#endif 

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
  //NONE

  // introduction
  cout << "Objective: odometer.\n"; 
  cout << "Programmer: Kunming Zhu\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << "CTRL-C to exit...\n"; 
  cout.fill('0'); 
  
  for (int mile100000 = 0; mile100000 < 10; mile100000++) 
  { 
    for (int mile10000 = 0; mile10000 < 10; mile10000++) 
    { 
      for (int mile1000 = 0; mile1000 < 10; mile1000++) 
      { 
        for (int mile100 = 0; mile100 < 10; mile100++)
        {
          for (int mile10 = 0; mile10 < 10; mile10++)
          {
            for (int mile = 0; mile < 10; mile++)
            {
              for (int mile1 = 0; mile1 < 10; mile1++)
              {
                cout << setw(1) << mile100000 << ' '; 
                cout << setw(1) << mile10000 << ' '; 
                cout << setw(1) << mile1000 << ' '; 
                cout << setw(1) << mile100 << ' '; 
                cout << setw(1) << mile10 << ' '; 
                cout << setw(1) << mile << '.'; 
                cout << setw(1) << mile1 << ' '; 
                cout.flush(); 
  
                #ifdef _WIN32 
                Sleep(1000); // one thousand milliseconds
                #else 
                sleep(1); // one second 
                #endif 
  
          cout << '\r'; // CR 
              }
            }
          }
        }  
      } 
    } 
  } 

}//main
