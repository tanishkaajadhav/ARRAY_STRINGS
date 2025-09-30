// Search Element in Array

#include <iostream>
using namespace std;

class ArraySearch
{
private:
    int Arr[100], iSize;

public:
    void Input()
    {
        cout << "Enter size of array : \n";
        cin >> iSize;
        cout << "Enter the elements : \n";
        for (int iCnt = 0 ; iCnt < iSize ; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    void Search()
    {
        int iKey;
        cout << "Enter element to search : \n";
        cin >> iKey;
        bool found = false;
        for (int icnt = 0 ; icnt < iSize ; icnt++)
        {
            if (Arr[icnt] == iKey)
            {
                cout << "Element found at position " << icnt + 1 << "\n";
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << "Element not found \n";
        }
    }
};

int main()
{
    ArraySearch obj;
    obj.Input();
    obj.Search();
    return 0;
}

/*
OUPUT

Testcase 1 :
Enter size of array :
7
Enter the elements :
1 23 54 76 443 67 5
Enter element to search :
76
Element found at position 4

Testcase 2 :
Enter size of array :
3
Enter the elements :
12 67 4
Enter element to search :
2
Element not found
*/