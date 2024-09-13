
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

    int searchRange(vector<int> &nums, int target)
    {
        int startIndex = getStartIndex(nums, target);
        int endIndex = getEndIndex(nums, target);

        if (startIndex == -1 || endIndex == -1)
            return 0;
        return ((endIndex - startIndex) + 1);
    }
};

int main()
{
    vector<int> nums = {1, 1, 2, 2, 2, 2, 3};
    // vector<int> nums = {};
    int target = 2;

    Solution s; 

    int result = s.searchRange(nums, target);
    cout << "\n Result \n";
    cout << "Occurences : " << result;

    return 0;
}