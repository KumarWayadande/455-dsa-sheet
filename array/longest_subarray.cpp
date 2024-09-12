#include <iostream>
#include <vector>
using namespace std;

int sort(vector<int> &nums, int k)
{
    int len = 0, count = 0, sum = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += nums[j];
            count++;
            if (sum == k)
            {
                len = max(len, count);
                // count = 0;
            }
        }
    }

    return len;
}

void display(vector<int> &nums)
{
    for (auto x : nums)
    {
        cout << x << "  ";
    }
}

int main()
{
    vector<int> nums = {-1, 2, 3};
    int k = 6;

    int result = sort(nums, k);

    cout << "\n Result : " << result;

    return 0;
}