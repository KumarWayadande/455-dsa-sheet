#include <iostream>
#include <vector>
using namespace std;

// class Solution
// {
// public:
//     void rotate(vector<int> &nums, int k)
//     {
//         // int n = nums.size();
//         // for(int i = 1; i <= k; i++){
//         //     int last = nums[n - 1];
//         //     for(int j = n - 1;j > 0; j--)
//         //         nums[j] = nums[j - 1];
//         //     nums[0] = last;
//         // }

//         // for (int i = 0; i < k; i++)
//         // {
//         //     if (first == (n - 1))
//         //         first = 0;
//         //     else
//         //         first++;
//         // }

//         // for (int i = 0; i < first; i++)
//         // {
//         //     int last = nums[n - 1];
//         //     for (int j = (n - 1); j > 0; j--)
//         //     {
//         //         nums[j] = nums[j - 1];
//         //     }
//         //     nums[0] = last;
//         // }
//         int n = nums.size();

//         int first = k % n;
//         vector<int> newNums(n, 0);

//         int index = 0;

//         for(int i = first; i < n; i++){
//             newNums[index++] = nums[i];
//         }

//         for(int i = 0; i <= first; i++){
//             newNums[index++] = nums[i];
//         }

//         nums = newNums;

//         cout << "\nfirst :" << first << endl;
//     }

//     void display(vector<int> &nums)
//     {
//         for (auto x : nums)
//             cout << x << "  ";
//     }
// };

// int main()
// {

//     vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
//     int k = 3;

//     Solution s;

//     cout << "\n Array before Rotation\n";
//     s.display(nums);

//     s.rotate(nums, k);

//     cout << "\n Array after Rotation\n";
//     s.display(nums);

//     return 0;
// }

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        int first = k % n;

        vector<int> temp(n);

        for (int i = 0; i < n; i++)
        {
            temp[(i + first) % n] = nums[i];
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] = temp[i];
        }
    }

    void display(vector<int> &nums)
    {
        for (auto x : nums)
            cout << x << "  ";
    }
};

int main()
{

    // vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    vector<int> nums = {-1, -100, 3, 99};
    int k = 2;

    Solution s;

    cout << "\n Array before Rotation\n";
    s.display(nums);

    s.rotate(nums, k);

    cout << "\n Array after Rotation\n";
    s.display(nums);

    return 0;
}