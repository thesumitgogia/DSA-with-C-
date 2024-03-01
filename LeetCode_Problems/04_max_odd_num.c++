#include <iostream>
using namespace std;

string maximumOddBinaryNumber(string S)
{
    int n = S.length(), count, j;
    count = j = 0;
    if (n >= 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (S[i] == '1')
                count++;
            continue;
        }
    }

    if (count == 1)
    {
        S[n - 1] = '1';
        for (int i = 0; i < n - 1; i++)
            S[i] = '0';
    }
    else if (count >= 2)
    {
        while (j < count - 1)
            S[j++] = '1';

        for (int i = count - 1; i < n - 1; i++)
            S[i] = '0';
        S[n - 1] = '1';
    }
    return S;
}
int main()
{
    // string s = "010";
    string s = "0101";
    // string s = "000011100";
    cout << maximumOddBinaryNumber(s);
    return 0;
}