// Identification comments code block
// Programmer: First Last
// Programmer's ID: 1234567

// C++ libraries code block
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// C libraries code block
#include <cstdlib> // for atoi and atof

struct Student {
  string name;
  int studentID;
  float gpa;
};

Student input();
void output(const Student&);

int main() {
  // create an array of student objects
  const int CAPACITY = 2;
  Student x[CAPACITY]; // an array of objects

  // enter data for each student
  for (int i = 0; i < CAPACITY; i++)
    x[i] = input();

  // output each student's data
  for (int i = 0; i < CAPACITY; i++)
    output(x[i]);
}

/** @brief Gathers input for a single student record
 *         from the console.
 *  @return a Student value containing the resulting record.
 */
Student input() {
  Student result;
  char buf[32];

  cout << "Enter a student's name: ";
  getline(cin, result.name);

  cout << "Enter " << result.name <<"'s student ID: ";
  cin >> buf;

  result.studentID = atoi(buf);
  cin.ignore(1000, '\n');

  cout << "Enter " << result.name << "'s GPA: ";
  cin >> buf;
  result.gpa = atof(buf);
  cin.ignore(1000, '\n');

  return result;
}

/** @brief Outputs a single student record to the console.
 *  @param  Student a reference to the the Student record
 *          to be printed.
 *  @return Void.
 */
void output(const Student& s) {
  cout.width(32);
  cout << s.name;
  cout.width(10);
  cout << s.studentID;
  cout.setf(ios::fixed); 
  cout.precision(2);
  cout.width(10);
  cout << s.gpa << endl;
}
