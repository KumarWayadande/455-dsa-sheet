#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {   int ans = -1;
        int med = 0, low = 0, high, n = nums.size();
        high = n - 1;
        int key = target;

        while (low <= high)
        {
            med = (low + high) / 2;

            if(nums[med] <= key){
                low = med + 1;
            }
            else if(nums[med] > key){
                ans = med;
                high = med - 1;
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key = 0;

    int result = s.search(nums, key);
    cout << "Result No  : " << result << endl;
    cout << "Result     : " << nums[result];

    return 0;
}