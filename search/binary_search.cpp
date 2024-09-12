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
            {
                return med;
            }
            else if (nums[med] > key)
            {
                high = med;
            }
            else if (nums[med] < key)
            {
                low = med + 1;
            }
        }

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 8;

    int result = s.search(nums, key);
    cout << "Result : " << result;

    return 0;
}