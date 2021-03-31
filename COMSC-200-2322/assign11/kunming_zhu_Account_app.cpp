#include <iostream>
#include <iomanip>
#include "kunming_zhu_Account.h" // Account class definition
#include "kunming_zhu_SavingsAccount.h" // SavingsAccount class definition
#include "kunming_zhu_CheckingAccount.h" // CheckingAccount class definition
using namespace std;

int main()
{
   Account account1( 50.0 ); // create Account object
   SavingsAccount account2( 25.0, .03 ); // create SavingsAccount object
   CheckingAccount account3( 80.0, 1.0 ); // create CheckingAccount object

   cout << fixed << setprecision( 2 );

   // display initial balance of each object
   cout << "account1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;
   cout << "account3 balance: $" << account3.getBalance() << endl;

   cout << "\nAttempting to debit $25.00 from account1." << endl;
   account1.debit( 25.0 ); // try to debit $25.00 from account1
   cout << "\nAttempting to debit $30.00 from account2." << endl;
   account2.debit( 30.0 ); // try to debit $30.00 from account2
   cout << "\nAttempting to debit $40.00 from account3." << endl;
   account3.debit( 40.0 ); // try to debit $40.00 from account3

   // display balances
   cout << "\naccount1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;
   cout << "account3 balance: $" << account3.getBalance() << endl;

   cout << "\nCrediting $40.00 to account1." << endl;
   account1.credit( 40.0 ); // credit $40.00 to account1
   cout << "\nCrediting $65.00 to account2." << endl;
   account2.credit( 65.0 ); // credit $65.00 to account2
   cout << "\nCrediting $20.00 to account3." << endl;
   account3.credit( 20.0 ); // credit $20.00 to account3

   // display balances
   cout << "\naccount1 balance: $" << account1.getBalance() << endl;
   cout << "account2 balance: $" << account2.getBalance() << endl;
   cout << "account3 balance: $" << account3.getBalance() << endl;

   // add interest to SavingsAccount object account2
   double interestEarned = account2.calculateInterest();
   cout << "\nAdding $" << interestEarned << " interest to account2." 
      << endl;
   account2.credit( interestEarned );

   cout << "\nNew account2 balance: $" << account2.getBalance() << endl;

   cout<<"\n---------------------------------------------\n";
   cout<<"\nTest overloading operator for Account class.\n";
   cout<<"\naccount11 = account1 ."<<endl;
   Account account11 = account1;
   cout<<"\naccount11 balance: $" <<account11.getBalance() <<endl;
   cout<<"\naccount11 = account1 + 50 "<<endl;
   account11 = account1 + 50;
   cout<<"\naccount11 balance: $" <<account11.getBalance() <<endl;
   cout<<"\naccount11 = 50 + account1 "<<endl;
   account11 = 50 + account1;
   cout<<"\naccount11 balance: $" <<account11.getBalance() <<endl;
   cout<<"\naccount11 = account1 - 50 "<<endl;
   account11 = account1 - 50;
   cout<<"\naccount11 balance: $" <<account11.getBalance() <<endl;
   cout<<"\naccount11 += 50 "<<endl;
   account11 += 50;
   cout<<"\naccount11 balance: $" <<account11.getBalance() <<endl;
   cout<<"\naccount11 -= 50 "<<endl;
   account11 -= 50;
   cout<<"\naccount11 balance: $" <<account11.getBalance() <<endl;
   cout<<"\nTest cout Account.\n";
   cout<<account1;
   cout<<"\n\n";
   cout<<"\n---------------------------------------------\n";
   cout<<"\nTest overloading operator for SavingsAccount class.\n";
   cout<<"\naccount22 = account2 "<< endl;
   SavingsAccount account22 = account2;
   cout<<"\naccount22: " << account22 << endl;
   cout<<"\naccount22 = account2 + 50 "<< endl;
   account22 = account2 + 50;
   cout<<"\naccount22: " <<account22 << endl;
   cout<<"\naccount22 = 50 + account2 "<< endl;
   account22 = 50 + account2;
   cout<<"\naccount22: " << account22 << endl;
   cout<<"\naccount22 = account2 - 50 "<< endl;
   account22 = account2 - 50;
   cout<<"\naccount22: " << account22 << endl;
   cout<<"\naccount22 += 50 "<< endl;
   account22 += 50;
   cout<<"\naccount22: " << account22 << endl;
   cout<<"\naccount22 -= 50 "<< endl;
   account22 -= 50;
   cout<<"\naccount22: " << account22 << endl;
   cout<<"\nTest cout SavingsAccount.\n";
   cout<<account22;   
   cout<<"\n\n";
   cout<<"\n---------------------------------------------\n";
   cout<<"\nTest overloading operator for CheckingAccount class.\n";
   cout<<"\naccount33 = account3 ."<< endl;
   CheckingAccount account33 = account3;
   cout<<"\naccount33: " << account33 << endl;
   cout<<"\naccount33 = account3 + 50 "<< endl;
   account33 = account3 + 50;
   cout<<"\naccount33: " <<account33 << endl;
   cout<<"\naccount33 = 50 + account3 "<< endl;
   account33 = 50 + account3;
   cout<<"\naccount33: " << account33 << endl;
   cout<<"\naccount33 = account3 - 50 "<< endl;
   account33 = account3 - 50;
   cout<<"\naccount33: " << account33 << endl;
   cout<<"\naccount33 += 50 "<< endl;
   account33 += 50;
   cout<<"\naccount33: " << account33 << endl;
   cout<<"\naccount33 -= 50 "<< endl;
   account33 -= 50;
   cout<<"\naccount33: " << account33 << endl;
   cout<<"\nTest cout CheckingAccount.\n";
   cout<<account33;
   cout<<"\n\n";
   
   
   system("PAUSE");
   return 0;
   
}
