class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(), 0);

        int even = 0;
        int odd = 1;

        for(int x : nums){
            if(x < 0){
                ans[odd] = x;
                odd += 2;
            }
            else {
                ans[even] = x;
                even += 2;
            }
        }

        if(odd == 1 || even == 0)
            return nums;
        else return ans;
    }   
};