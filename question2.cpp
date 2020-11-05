#include<iostream>
using namespace std;

int solns = 0;

void countComb(int* arr, int low, int high, int Val)
{
    bool b = false;
    for (size_t i = low; i <= high; i++)
    {
        if (Val - arr[i] == 0)
        {
            solns++;
            break;
        }
        else if (Val - arr[i] > 0)
            countComb(arr, i, high, Val - arr[i]);
        
    }
}

int main()
{
    int coins[] = { 10,20,50,100,500,1000,2000 };
    int value = 2000;
    int arrSize = sizeof(coins) / sizeof(int);
    countComb(coins,0, arrSize,value);
    cout << solns << endl;
    return 0;
}
