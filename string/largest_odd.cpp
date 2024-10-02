class Solution {
public:
    string largestOddNumber(string num) {
        int lastOddIndex = -1;
        int firstOddIndex = -1;

        string ans = "";
        bool flag1 = false;

        for(int i = num.length(); i >= 0; i--){
            if(num[i] == '1' || num[i] == '3' || num[i] == '5' || num[i] == '7' || num[i] == '9'){
                lastOddIndex = i;
                break;
            }
        }

        for(int i = 0; i <= lastOddIndex; i++){
            ans += num[i];
        }

        return ans;
    }
};