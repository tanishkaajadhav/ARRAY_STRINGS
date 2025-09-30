// Write a code to identify palindrome

#include <iostream>
#include <string>
using namespace std;

class StringOps
{
private:
    string str;
    bool flag;

public:
    void input()
    {
        cout << "Enter a string: ";
        cin >> str;
    }

    void process()
    {
        int n = str.length();
        flag = true;
        for (int i = 0; i < n / 2; i++)
        {
            if (str[i] != str[n - i - 1])
            {
                flag = false;
                break;
            }
        }
    }

    void display()
    {
        if (flag)
            cout << "The string is palindrome\n";
        else
            cout << "The string is NOT palindrome\n";
    }
};

int main()
{
    StringOps s;
    s.input();
    s.process();
    s.display();
    return 0;
}

/*
OUTPUT
Testcase 1 : 
Enter a string: hello
The string is NOT palindrome

Testcase 2 :
Enter a string: radar
The string is palindrome
*/