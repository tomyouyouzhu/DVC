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
  void output() const;  // member functions
  void input();
};

int main() {
  // create an array of student objects
  const int CAPACITY = 2;
  Student x[CAPACITY]; // an array of objects

  // identification output code block
  cout << "Programmer: First Last\n";
  cout << "Programmer's ID: 1234567\n";
  cout << "File: " << __FILE__ << endl;

  // enter data for each student
  for (int i = 0; i < CAPACITY; i++)
    x[i].input();

  // output each student's data
  for (int i = 0; i < CAPACITY; i++)
    x[i].output();
}

void Student::input() { // a value-returning function that returns an object
  char buf[32];

  cout << "Enter a student's name: ";
  getline(cin, name);

  cout << "Enter " << name <<"'s student ID: ";
  cin >> buf;
  studentID = atoi(buf);
  cin.ignore(1000, '\n');

  cout << "Enter " << name << "'s GPA: ";
  cin >> buf;
  gpa = atof(buf);
  cin.ignore(1000, '\n');
}

void Student::output() const {
  cout.width(32);
  cout << name;
  cout.width(10);
  cout << studentID;
  cout.setf(ios::fixed);
  cout.precision(2);
  cout.width(10);
  cout << gpa << endl;
}
