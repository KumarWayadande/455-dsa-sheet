#include <iostream>
#include <vector>
using namespace std;

vector<int> reverseArray(vector<int> nums, int start, int last)
{
    if (start < last)
        return nums;

    int temp = nums[start];
    nums[start] = nums[last];
    nums[last] = temp;

    reverseArray(nums, ++start, --last);
}





int main(int argc, char const *argv[])
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 8};
    int n = nums.size();
    // for(int i = 0, j = n - 1; i < (n / 2); i++, j--){
    //     int temp = nums[i];
    //     nums[i] = nums[j];
    //     nums[j] = temp;
    // }

    nums = reverseArray(nums, 0, (n - 1));
    for (auto x : nums)
    {
        cout << x << "  ";
    }

    

    return 0;
}
