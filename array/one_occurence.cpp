// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//             if (nums.size() == 1)
//         return nums[0];
//     else
//     {
//         int ans = nums[0] ^ nums[1];
//         for (int i = 2; i < nums.size(); i++)
//             ans = ans ^ nums[i];
//         return ans;
        
//     }
//     }
// };