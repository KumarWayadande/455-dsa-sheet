#include <iostream>
#include <vector>
using namespace std;

int bubbleSort(vector<int> &nums, int n)
{

    if (n == 1)
        return 0;

    bool flag = false;
    for (int j = 0; j < n - 1; j++)
    {

        if (nums[j] > nums[j + 1])
        {
            int temp = nums[j];
            nums[j] = nums[j + 1];
            nums[j + 1] = temp;
            flag = true;
        }
    }

    if(!flag)
        return 0;

    bubbleSort(nums, n - 1);
}

void display(vector<int> &nums)
{
    cout << "\n Elements \n";
    for (auto x : nums)
    {
        cout << x << "  ";
    }
}

int main(int argc, char const *argv[])
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8};
    // vector<int> nums = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    display(nums);
    bubbleSort(nums, nums.size());
    display(nums);

    return 0;
}
