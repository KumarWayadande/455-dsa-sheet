#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {

        int n = nums.size();
        int k = 0;
        auto smallest = min_element(nums.begin(), nums.end());
        int med = 0, low = 0, high = n - 1;
        vector<int> newNums(n, 0);

        for (k = 0; k < n; k++)
        {
            if (nums[k] == *smallest)
                break;
        }
        
        for (int i = 0; i < n; i++)
        {
            newNums[i] = nums[((i + k) % n)];
        }

        while (low <= high)
        {
            med = (low + high) / 2;

            if (newNums[med] == target)
                return ((med + k) % n);
            else if (newNums[med] > target)
                high = med - 1;
            else if (newNums[med] < target)
                low = med + 1;
        }

        return -1;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    // vector<int> nums = {1, 3};
    int key = 0;

    int result = s.search(nums, key);
    cout << "\nResult : " << result;

    return 0;
}