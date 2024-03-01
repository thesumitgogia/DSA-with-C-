#include <iostream>
using namespace std;
#include <vector>
class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> pos;
        vector<int> neg;
        vector<int> res;
        for (int i = 0; i < n; i++)
        {
            if (nums[i] >= 0)
                pos.push_back(nums[i]);

            if (nums[i] < 0)
                neg.push_back(nums[i]);
        }

        for (int i = 0; i < 3; i++)
        {
            res.push_back(pos[i]);
            res.push_back(neg[i]);
        }

        return res;
    }
};

int main()
{
    vector<int> nums = {3, 1, -2, -5, 2, -4};
    // vector<int> nums = {-1, 1};
    Solution solution;
    vector<int> res = solution.rearrangeArray(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}
