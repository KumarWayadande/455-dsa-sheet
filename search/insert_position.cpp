#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int n = nums.size() - 1;
        int med = 0, low = 0, high = n;

        while (low <= high)
        {
            med = (low + high) / 2;

            if (nums[med] == target)
                return med;
            else if (nums[med] > target)
                high = med - 1;
            else if (nums[med] < target)
                low = med + 1;
        }

        return low;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 3, 5, 6};
    int key = 7;

    int result = s.search(nums, key);
    cout << "Result : " << result;

    return 0;
}