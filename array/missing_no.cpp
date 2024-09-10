class Solution {
public:
     int missingNumber(vector<int>& nums) {
                int sum = (nums.size() * (nums.size() + 1)) / 2;
                int actualSum = 0;

                for(int x : nums){
                    actualSum += x;
                }

                return (sum - actualSum);
        }   
};