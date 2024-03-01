#include <iostream>
using namespace std;
void merge(int a)
{
    if(a == 0){
        return;
    }
    int count = 0;
    count++;
    cout << "HELLO" << count << endl;
    merge(a - 1);
    merge(a - 1);
}
int main()
{
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // int n;
    // cin >> n;
    // cout << n;
    merge(6);
    return 0;
}

