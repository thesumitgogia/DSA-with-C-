#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> &arr, int s, int e, int k)
{
    if (s > e)
        return -1;

    int mid = (s + e) / 2;
    if (arr[mid] == k)
        return mid;

    if (arr[mid] > k)
        binarySearch(arr, s, mid - 1, k);

    else
        binarySearch(arr, mid + 1, e, k);
}

int search(vector<int> &nums, int target)
{
    return binarySearch(nums, 0, nums.size(), target);
}

int main()
{
    vector<int> nums = {1, 3, 7, 9, 11, 12, 45};
    cout << search(nums, 78);
    return 0;
}
