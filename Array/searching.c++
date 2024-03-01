#include <iostream>
#include "dummyArray100000.c++"
using namespace std;
int binarySearch(int[], int, int);
int linearSearch(int[], int, int);
int main()
{
    int item = 834543;
    // cout << binarySearch(A, item, 1000);
    cout << linearSearch(A, item, 100000);
    return 0;
}

int linearSearch(int arr[], int item, int n)
{
    int loc = -1, i;
    for (i = 0; i < n; i++)
    {
        if (item == arr[i])
        {
            loc = i;
            break;
        }
    }
    return loc;
}
int binarySearch(int arr[], int item, int n)
{
    int loc = -1, i, beg = 0, mid, end = n - 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (item == arr[mid])
        {
            loc = mid;
            break;
        }
        else if (item > arr[mid])
        {
            beg = mid + 1;
        }
        else
            end = mid - 1;
    }
    return mid;
}
