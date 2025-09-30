// Reversing Array

#include <iostream>
using namespace std;

class ArrayReverse
{
private:
    int Arr[100], iSize;

public:
    void Input()
    {
        cout << "Enter size of array : ";
        cin >> iSize;
        cout << "Enter the elements : \n";
        for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    void Reverse()
    {
        cout << "Reversed array : \n";
        for (int icnt = iSize - 1 ; icnt >= 0 ; icnt--)
        {
            cout << Arr[icnt] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    ArrayReverse obj;
    obj.Input();
    obj.Reverse();
    return 0;
}

/*
OUTPUT
Enter size of array : 5
Enter the elements :
23 4 5 2 65
Reversed array :
65 2 5 4 23
*/