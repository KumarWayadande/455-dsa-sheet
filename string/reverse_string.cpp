class Solution {
public:
    string reverseWords(string s) {
        string part, ans;
        ans = part = "";
        bool flag = false;

        for (char ch : s) {
            if (ch == ' ' && part != "") {
                if (!flag) {
                    ans = part;
                    flag = true;
                } else
                    ans = part + " " + ans;

                part = "";
            }

            if (ch != ' ')
                part += string(1, ch);
        }
        if (part != "") {
            if(flag)
                ans = part + " " + ans;
            else
                ans = part;
        } 
        return ans;
    }
};