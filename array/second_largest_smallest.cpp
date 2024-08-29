#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1, 1};

    int smallest = nums[0];
    int largest = nums[0];

    for (auto x : nums)
    {
        if (x < smallest)
            smallest = x;

        if (x > largest)
            largest = x;
    }

    bool flag = false;
    int max = nums[0], min = nums[0];

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > smallest && flag == false)
        {
            min = nums[i];
            flag = true;
        }

        if (nums[i] < largest && nums[i] > max)
            max = nums[i];
    }

    if(min == smallest || max == largest){
        cout << "Not Found";
        return 0;
    }


    cout << "\n min : " << min << "   max : " << max;

    return 0;
}