#include <iostream>
using namespace std;
void binarySearch(int &arr, int n, int k)
{
    int beg = 0, end = n - 1, mid;
    mid = (beg + end) / 2;
}
bool isSorted(int *arr, int size)
{

    if (size == 0 || size == 1)
    {

        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else
    {
        return isSorted(arr + 1, size - 1);
    }
}
int sum(int *arr, int size)
{
    int s = 0;
    if (size == 0)
    {
        return 0;
    }

    if (size == 1)
    {
        return arr[0];
    }

    int remaining = sum(arr + 1, size - 1);
    int sum = arr[0] + remaining;
    return sum;
}

bool linearSearch(int *arr, int n, int k)
{
    if (n == 0)
        return false;
    if (arr[0] == k)
        return true;
    else
        linearSearch(arr + 1, n - 1, k);
}

bool binarySearch(int *arr, int s, int e, int k)
{
    if (s > e)
        return false;

    int mid = (s + e) / 2;
    if (arr[mid] == k)
        return true;

    if (arr[mid] > k)
        binarySearch(arr, s, mid - 1, k);

    else
        binarySearch(arr, mid + 1, e, k);
}

void bubbleSort(int &arr)
{
    cout << arr + 1 << endl;
}
int main()
{
    int n = 8;
    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 8;
    cout << arr[0] << endl;
    bubbleSort(arr);
    cout << arr[0];
    return 0;
}
