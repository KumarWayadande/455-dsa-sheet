#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        int n = nums.size();
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(nums[j] == 0){
                    swap(nums[j], nums[j + 1]);
                }
            }
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

    // vector<int> nums = {0, 1, 0, 3, 12};
    vector<int> nums = {0};
    // vector<int> nums = {-1, -100, 3, 99};

    Solution s;

    cout << "\n Array before Rotation\n";
    s.display(nums);

    s.moveZeroes(nums);

    cout << "\n Array after Rotation\n";
    s.display(nums);

    return 0;
}