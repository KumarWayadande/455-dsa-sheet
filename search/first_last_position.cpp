
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

class Solution
{
public:
    int getStartIndex(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1, ans = -1;

        while (low <= high)
        {
            int med = (low + high) / 2;

            if (nums[med] == target)
            {
                ans = med;
                high = med - 1;
            }
            else if (nums[med] < target)
                low = med + 1;
            else if (nums[med] > target)
                high = med - 1;
        }
        return ans;
    }
    int getEndIndex(vector<int> &nums, int target)
    {
        int n = nums.size();
        int low = 0, high = n - 1, ans = -1;

        while (low <= high)
        {
            int med = (low + high) / 2;

            if (nums[med] == target)
            {
                ans = med;
                low = med + 1;
            }
            else if (nums[med] < target)
                low = med + 1;
            else if (nums[med] > target)
                high = med - 1;
        }
        return ans;
    }

    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> result;

        result.insert(result.end(), getStartIndex(nums, target));
        result.insert(result.end(), getEndIndex(nums, target));
        return result;
    }
};

int main()
{
    vector<int> nums = {2, 2, 3, 3, 3, 3, 4};
    // vector<int> nums = {};
    int target = 100;

    Solution s;

    vector<int> result = s.searchRange(nums, target);
    cout << "\n Result \n";

    for (auto x : result)
        cout << x << "  ";
    // cout << "Occurences : " << (result[1] - result[0]) + 1;

    return 0;
}