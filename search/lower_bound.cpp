#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int med = 0, low = 0, high, n = nums.size();
        high = n - 1;
        int key = target;

        while (low <= high)
        {
            med = (low + high) / 2;

            if (nums[med] == key)
                return med;

            if (nums[med] > key)
            {
                high = med - 1;
            }
            else if (nums[med] < key)
            {
                low = med + 1;
            }
        }

        cout << "nums[med] : " << nums[med] << endl;

        if (med == n - 1)
        {
            if (nums[med] < key)
                return -1;
        }
        if (med == 0)
        {
            if (nums[med] > key)
                return -1;
        }
        return med;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {11, 12, 13, 40};
    int key = 14;

    int result = s.search(nums, key);
    cout << "Result : " << result;

    return 0;
}