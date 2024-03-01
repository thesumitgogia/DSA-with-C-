#include <iostream>
using namespace std;
#include "start.c++"
#include "target.c++"
// for(i < start.length)
// if(s[i]==L and s[i-1] == _)
//     move L to left
//     s[I] = '_'
//     s[I - 1] = 'L'
// if(s[i]==R and s[i+1] == _)
//     move R to left
//     s[I] = '_'
//     s[I + 1] = 'R'
bool move(string &start, string &target)
{
   
    int n = start.length();
    for (int i = 0; i < n; i++)
    {
        if (start[i] == '_')
            continue;
        for (int j = 0; j < n; j++)
        {
            if (start[j] == '_')
                j++;
            if (start[j] == 'L' && start[j - 1] == '_')
            {
                // cout << "move";
                start[j] = '_';
                start[j - 1] = 'L';
            }

            if (start[j] == 'R' && start[j + 1] == '_')
            {
                // cout << "move";
                start[j] = '_';
                start[j + 1] = 'R';
            }
        }
    }
    if (start == target)
        return true;
    else
        return false;
}

// bool move2(string start, string target)
// {
//     int n = start.size();
//     for (int i = 0, j = 0; i < n && j < n; ++i, ++j)
//     {
//         while (i < n && start[i] == 'X')
//             i++; // Skip 'X' characters in start
//         while (j < n && target[j] == 'X')
//             j++; // Skip 'X' characters in target

//         if (i == n && j == n)
//             return true; // If both strings are exhausted, return true
//         if (i == n || j == n)
//             return false; // If only one string is exhausted, return false

//         if (start[i] != target[j])
//             return false; // If characters at current positions are different, return false

//         if (start[i] == 'R' && i > j)
//             return false; // 'R' in start moves left but target has it at right
//         if (start[i] == 'L' && i < j)
//             return false; // 'L' in start moves right but target has it at left
//     }
// }
int main()
{

    // string start = "_L__R__R_";
    // string target = "L______RR";

    move(start, target);
    cout << start << endl;

    // string start1 = "_L__R__R_";
    // string target1 = "L______RR";
    // cout << move(start1, target1) << endl;
    // cout << start1 << endl; // L______RR

    // string start2 = "R_L_";
    // string target2 = "__LR";
    // cout << move(start2, target2) << endl;
    // cout << start2 << endl; // _RL_

    // string start3 = "_R";
    // string target3 = "R_";
    // cout << move(start3, target3) << endl;
    // cout << start3 << endl; // _R

    // cout << move(start, target);
    return 0;
}