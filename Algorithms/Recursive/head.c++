#include <iostream>
using namespace std;
int fuc(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fuc(n - 1);
    cout << n << endl;
}
int main()
{
    cout << fuc(4);
    // cout << "Hello World!";
    return 0;
}