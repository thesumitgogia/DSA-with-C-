#include <iostream>
using namespace std;
#include <bits/stdc++.h>
#include <vector>

int main()
{

    vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int n = mat.size();

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << mat[i][j] << endl;
    //     }
    // }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(mat[i][j], mat[j][i]);
            cout << i << " " << j << endl;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // cout << mat[i][j] << endl;
        }
    }

    return 0;
}