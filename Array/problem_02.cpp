#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        // int n = nums.size();
        for (int i = 0; i < 8; i++)
        {
            if (nums[i] == val)
                nums.erase(nums.begin() + i);
            else{
                continue;
            }
        }
        return nums.size();
    }
};

int main(int argc, char const *argv[])
{
    vector<int> arr1 = {3, 2, 2, 3};
    vector<int> arr2 = {0, 1, 2, 2, 3, 0, 4, 2};
    Solution sol;
    int a = 10;
    int b = 10;
    int c = a + b;
    // cout << sol.removeElement(arr1, 3) << endl;
    // cout << sol.removeElement(arr2, 2) << endl;
    sol.removeElement(arr2, 2);
    return 0;
}
