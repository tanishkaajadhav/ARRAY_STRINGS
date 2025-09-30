// Finding Max & Min Element

#include <iostream>
using namespace std;

class ArrayMaxMin
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

    void FindMaxMin()
    {
        int iMax = Arr[0], iMin = Arr[0];
        for (int icnt = 1 ; icnt < iSize ; icnt++)
        {
            if (Arr[icnt] > iMax)
            {
                iMax = Arr[icnt];
            }
            if (Arr[icnt] < iMin)
            {
                iMin = Arr[icnt];
            }
        }
        cout << "Maximum element : " << iMax << "\n";
        cout << "Minimum element : " << iMin << "\n";
    }
};

int main()
{
    ArrayMaxMin obj;
    obj.Input();
    obj.FindMaxMin();
    return 0;
}

/*
OUTPUT
Enter size of array :
5
Enter the elements :
34 4 56 32 3
Maximum element : 56
Minimum element : 3
*/