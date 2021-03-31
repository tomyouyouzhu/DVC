#include <iostream>
#include <iomanip>
#include <cmath> 
#include <bitset> // bitset class definition
using namespace std;

int main() {
   const size_t SIZE = 1024;
   bitset<SIZE> sieve; // create bitset of 1024 bits
   sieve.flip(); // flip all bits in bitset sieve     
   sieve.reset(0); // reset first bit (number 0)    
   sieve.reset(1); // reset second bit (number 1)  
   double finalBit;
    finalBit=sqrt(sieve.size());
   for (int i =2; i<finalBit; i++)
   {
      if (sieve.test(i))
      {
         for (int j=2*i; j<SIZE; j+=i)
            sieve.reset(j);
      }
   }
   cout<<"The prime numbers in the range from 2 "
       <<"to 1024 are: "<<endl;
      for (int k=2, counter=1; k<SIZE; k++)
      {
         if (sieve.test(k))
         {
            cout<<setw(5)<<k;
         }
         if (counter++ % 12==0)
            cout<<endl;
      }
      cout<<endl;
} 
