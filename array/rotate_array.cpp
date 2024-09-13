#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int first = k % n;

        vector<int> temp(n);
        for(int i = 0; i < n; i++){
            temp[(i + first) % n] = nums[i];
        }
        for(int  i = 0; i < n; i++){
            nums[i] = temp[i];
        }
    }
};
int main()
{

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    int last = nums[nums.size() - 1];

    

    return 0;
}