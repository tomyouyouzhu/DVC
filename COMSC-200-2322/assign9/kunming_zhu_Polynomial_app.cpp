#include <iostream> 
#include "kunming_zhu_Polynomial.h"
using namespace std;

int main()
{
   Polynomial a, b, c, t;

   a.enterTerms();
   b.enterTerms();
   t = a;   // save the value of a
   cout << "\nFirst polynomial is:\n";
   a.printPolynomial();
   cout << "\nSecond polynomial is:\n";
   b.printPolynomial();
   cout << "\nAdding the polynomials yields:\n";
   c = a + b;
   c.printPolynomial();
   cout << "\n+= the polynomials yields:\n";
   a += b;
   a.printPolynomial(); 
   cout << "\nSubtracting the polynomials yields:\n";
   a = t;  // reset a to original value
   c = a - b;
   c.printPolynomial();
   cout << "\n-= the polynomials yields:\n";
   a -= b;
   a.printPolynomial();
   cout << endl;

   return 0;
} // end main



/**************************************************************************
 * (C) Copyright 1992-2014 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
