class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeros = 0;
        int ones = 0;
        int twos = 0;
        vector<int> data(3, 0);
        for(int i = 0; i < nums.size(); i++){
            data[nums[i]] = data[nums[i]] + 1;
        }
        int k = 0;
        for(int i = 0; i < data[0]; i++){
            nums[k] = 0;
            k++;
        }
        for(int i = 0; i < data[1]; i++){
            nums[k] = 1;
            k++;
        }
        for(int i = 0; i < data[2]; i++){
            nums[k] = 2;
            k++;
        }
    }
};