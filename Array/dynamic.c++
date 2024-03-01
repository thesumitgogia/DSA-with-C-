#include <iostream>
#include "array.c++"
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number of elements: ";
    cin >> n;
    int *arr = new int[n];

    insert(arr, n);

    return 0;
}