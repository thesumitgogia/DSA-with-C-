#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> vec;
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = 1; j < nums.size(); j++)
            {
                if(j == i) continue;
                if ((nums[i] + nums[j]) == target)
                {   
                    vec.push_back(i);
                    vec.push_back(j);
                    return vec;
                }
            }
        }
        return vec;
    }
};

int main()
{
    Solution sol;
    vector<int> vec1 = {2, 7, 11, 15};
    vector<int> vec2 = {3, 2, 4};
    vector<int> vec3 = {3, 3};
    vector<int> vec4 = {2, 5, 5, 11};


    cout << sol.twoSum(vec1, 9)[0] << " " << sol.twoSum(vec1, 9)[1] << endl;
    cout << sol.twoSum(vec2, 6)[0] << " " << sol.twoSum(vec2, 6)[1] << endl;
    cout << sol.twoSum(vec3, 6)[0] << " " << sol.twoSum(vec3, 6)[1] << endl;
    cout << sol.twoSum(vec4, 10)[0] << " " << sol.twoSum(vec4, 10)[1] << endl;
    return 0;
}
