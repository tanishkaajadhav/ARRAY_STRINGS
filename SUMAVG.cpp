// Sum And Average of Array

#include <iostream>
using namespace std;

class ArraySumAvg
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

    void SumAvg()
    {
        int iSum = 0;
        for (int icnt = 0 ; icnt < iSize ; icnt++)
        {
            iSum += Arr[icnt];
        }
        float fAvg = (float)iSum / iSize;
        cout << "Sum = " << iSum << "\n";
        cout << "Average = " << fAvg << "\n";
    }
};

int main()
{
    ArraySumAvg obj;
    obj.Input();
    obj.SumAvg();
    return 0;
}

/*
OUTPUT
Enter size of array :
3
Enter the elements :
32 56 67
Sum = 155
Average = 51.6667
*/