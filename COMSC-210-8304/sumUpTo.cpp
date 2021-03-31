#include <iostream>
using namespace std;

int sumUpTo(int n)
{
   int sum = 0;
   if (n == 1)
      sum = 1;
   else if (n%2 != 0)// n > 1
      sum = n + sumUpTo(n - 1);
   else 
      sum = sumUpTo(n-1);
   return sum;
}

int main()
{
   cout<<sumUpTo(7);
}