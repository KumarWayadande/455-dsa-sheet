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
    vector<int> nums = {10,9, 20, 7, 6, 5, 4, 3, 2, 1};

    bool ascending = true;
    bool descending = true;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (ascending)
        {
            if (nums[i + 1] < nums[i])
            {
                ascending = false;
            }
        }
        if (descending)
        {
            if (nums[i + 1] > nums[i])
            {
                descending = false;
            }
        }
    }

    if (ascending)
        cout << "Ascending";
    else if (descending)
    {
        cout << "descending";
    }
    else
        cout << "Not sorted at all";

    return 0;
}