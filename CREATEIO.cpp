// Create Input Output: 

#include <iostream>
using namespace std;

class ArrayIO
{
private:
    int Arr[100], iSize;

public:
    void Input()
    {
        cout << "Enter size of array : ";
        cin >> iSize;
        cout << "Enter the elements : \n";
        for (int iCnt = 0; iCnt < iSize; iCnt++)
        {
            cin >> Arr[iCnt];
        }
    }

    void Display()
    {
        cout << "Array elements are : \n";
        for (int icnt = 0; icnt < iSize; icnt++)
        {
            cout << Arr[icnt] << " ";
        }
        cout << "\n";
    }
};

int main()
{
    ArrayIO obj;
    obj.Input();
    obj.Display();
    return 0;
}

/*
OUTPUT
Enter size of array : 5
Enter the elements :
1 2 3 4 5
Array elements are :
1 2 3 4 5

*/