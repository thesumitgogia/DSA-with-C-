#include <iostream>
#include "./myLib/arrayGenrator.c++"
#include "dummyArray1000.c++"
using namespace std;

void bubbleSort(int *arr, int n);

int main(int argc, char const *argv[])
{
    // int
    // int arr[8] = {8, 3, 34, 48, 2, 4, 1, 5};
    // arrayGenrator(1000, 1000);
    // cout << A[4];
    // storeArray(arr, 8);
    // cout << A[4] << endl;
    
    bubbleSort(A, 1000);
    // cout << A[0] << endl;
    // cout << A[2];

    return 0;
}

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                arr[j] = arr[j] + arr[j + 1];
                arr[j + 1] = arr[j] - arr[j + 1];
                arr[j] = arr[j] - arr[j + 1];
            }
        }
        // cout << arr[0] << endl;
    }

    storeArray(arr, n);
}
