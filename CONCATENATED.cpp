// To accept two strings from the user and display their concatenation using C++ string operations.

#include <iostream>
#include <string>
using namespace std;

class StringOperations 
{
private:
    string str1;
    string str2;

public:
    void AcceptStrings() {
        cout << "Enter the string 1: ";
        getline(cin, str1);
        cout << "Enter the string 2: ";
        getline(cin, str2);
    }

    string Concatenate() {
        return str1 + str2;
    }

    void DisplayResult() {
        cout << "The concatenated string is \"" << Concatenate() << " \"" << "\n";
    }
};

int main() 
{
    StringOperations obj;
    obj.AcceptStrings();
    obj.DisplayResult();
    return 0;
}

/*
OUPUT
Enter the string 1: Sunday
Enter the string 2: Monday
The concatenated string is "SundayMonday "
*/