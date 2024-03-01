#include <iostream>
using namespace std;
void fuc(int n)
{
    if(n > 0){
        return fuc(n-1);
        cout << n << endl;
    }
}
int main()
{
    int n = 3;
    fuc(n);
    // cout << fuc(n);
    return 0;
}

