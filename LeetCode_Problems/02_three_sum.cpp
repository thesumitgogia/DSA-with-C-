#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
vector<vector<int>> threeSum(vector<int> &nums)
{
    int a = 0, n = nums.size();
    vector<vector<int>> res;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 1; j < n; j++)
        {
            for (int k = 2; k < n; k++)
            {
                if (!(i != j && j != k && k != i))
                    continue;
                if ((nums[i] + nums[j] + nums[k]) == 0)
                {
                    res.push_back(vector<int>());
                    res[a].push_back(nums[i]);
                    res[a].push_back(nums[j]);
                    res[a].push_back(nums[k]);
                    a++;
                    break;
                }
            }
        }
    }
    for (auto &row : res)
    {
        sort(row.begin(), row.end());
    }
    sort(res.begin(), res.end());
    res.erase(unique(res.begin(), res.end()), res.end());

    return res;
}
int main()
{
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    vector<vector<int>> res = threeSum(nums);
    for (int i = 0; i < res.size(); i++)
    {
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << ", ";
        }
        cout << endl;
    }
    return 0;
}
