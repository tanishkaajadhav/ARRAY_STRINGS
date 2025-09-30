// STRING REVERSAL

#include <iostream>
#include <string>
using namespace std;

class StringReverse 
{
private:
    string str;

public:
    void input() 
    {
        cout << "Enter a string: ";
        getline(cin, str);
    }

    void reverseString() 
    {
        int n = str.length();
        for (int i = n - 1; i >= 0; i--) 
        {
            cout << str[i];
        }
        cout << "\n";
    }
};

int main() 
{
    StringReverse obj;
    obj.input();
    obj.reverseString();
    return 0;
}

/*
OUTPUT
Enter a string: Tanishka this side
edis siht akhsinaT
*/