#include <iostream>
#include "array.c++"
using namespace std;

int main()
{
    int arr[100], n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    insert(arr, n);
    return 0;
}