#include <iostream>
#include <vector>
using namespace std;

int selectionSort(vector<int> &nums)
{
 
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int max = nums[i];
        int maxIndex = i;
        for (int j = i; j < n; j++)
        {
            if (max > nums[j])
            {
                max = nums[j];
                maxIndex = j;
            }
        }
        int temp = nums[i];
        nums[i] = max;
        nums[maxIndex] = temp;
    }
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
    vector<int> nums = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    display(nums);
    selectionSort(nums);
    display(nums);

    return 0;
}
