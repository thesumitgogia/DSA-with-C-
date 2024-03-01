#include <iostream>
using namespace std;

void insert(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << "Element[" << i << "]= ";
        cin >> arr[i];
    }
    
    // Display Static Array
    for (int i = 0; i < n; i++)
    {
        cout << "Element at index [" << i << "] is: " << arr[i] << endl;
    }
}