#include <iostream>
#include <vector>
using namespace std;

// int bubbleSort(vector<int> &nums)
// {

//     int n = nums.size();

//     for (int i = 1; i < n; i++)
//     {
//         for (int j = 0; j < (n - i); j++)
//         {
//             if (nums[j] > nums[j + 1])
//             {
//                 int temp = nums[j];
//                 nums[j] = nums[j + 1];
//                 nums[j + 1] = temp;
//             }
//         }
//     }
// }

int bubbleSort(vector<int> &nums)
{
    int n = nums.size();

    for (int i = 0; i < (n - 1); i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (nums[j] > nums[j + 1])
            {
                int temp = nums[j + 1];
                nums[j + 1] = nums[j];
                nums[j] = temp;
            }
        }
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
    bubbleSort(nums);
    display(nums);

    return 0;
}
