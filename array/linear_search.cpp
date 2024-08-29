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

    int key = 3;

    bool flag = false;
    for (int i = 0; i < nums.size(); i++)
    {
        if (key == nums[i])
        {
            flag = true;
            break;
        }
    }

    if (flag)
        cout << "Found";
    else
        cout << "Not Found";

    return 0;
}