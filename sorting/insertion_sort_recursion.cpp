#include <iostream>
#include <vector>
using namespace std;

int insertionSort(vector<int> &nums, int n, int i)
{

    if (i >= n)
        return 0;

    int index = i;
    for (int j = i; j > 0; j--)
    {
        if (nums[index] < nums[j - 1])
        {
            int temp = nums[index];
            nums[index] = nums[j - 1];
            nums[j - 1] = temp;
            index = j - 1;
        }
    }

    insertionSort(nums, n, i + 1);
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

    // vector<int> nums = {1, 2, 6, 4, 5, 7, 2, 4};
    vector<int> nums = {10};
    display(nums);
    int n = nums.size();
    insertionSort(nums, n, 1);
    display(nums);

    return 0;
}
