#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &nums)
{
    for (auto x : nums)
        cout << x << " ";
}

int main()
{
    vector<int> nums = {1, 1, 1, 2, 2, 2, 3, 4, 4, 5};

    cout << endl
         << "Initial Array" << endl;
    display(nums);

    int index = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[index] != nums[i])
        {
            nums[index + 1] = nums[i];
            index++;
        }
    }

    cout << endl
         << "Modified Array" << endl;
    display(nums);

    cout << "\n Total No of unique numbers : " << (index + 1);

    return 0;
}