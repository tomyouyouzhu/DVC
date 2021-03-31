#include <iostream>
#include <vector>
#include <stack>
using namespace std;

bool isPalindrome(string teststr) {
    stack< char > st;
    string tmpstr;
    for( int i=0; i<teststr.size(); i++)
    {
        st.push(teststr[i]);
    }
    for (int i=0; i<teststr.size(); i++)
    {
        tmpstr += st.top();
        st.pop();
    }
    if (tmpstr==teststr)
        return true;
    return false;
}

int main() {
    string istr;
    string decision = " NOT ";
    cout << "Enter a string and I will check if it is a palindrome: ";
    getline(cin, istr);
    if (isPalindrome(istr))
        decision = " ";

    cout << "That string is" << decision << "a palindrome." << endl;
}

