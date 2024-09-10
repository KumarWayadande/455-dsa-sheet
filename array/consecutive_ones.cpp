#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int largest = 0, currentLargest = 0;

        for (auto x : nums)
        {
            if (x == 1)
            {
                currentLargest++;
            }
            else
            {
                largest = max(currentLargest, largest);
                currentLargest = 0;
            }

        }
            return max(largest, currentLargest);
    }
};

int main()
{

    vector<int> nums = {1, 1, 1, 0, 0, 0, 1, 1, 0, 1};
    Solution s;

    cout << "\nMax : " << s.findMaxConsecutiveOnes(nums);

    return 0;
}