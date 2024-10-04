class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        int n = strs.size();
        string s1 = strs[0], s2 = strs[n - 1];
        string ans = "";
        for(int i = 0; i < min(s1.length(), s2.length()); i++){
            if(s1[i] != s2[i]){
                return ans;
            }
            ans += s1[i];
        }
        return ans;
    }
};