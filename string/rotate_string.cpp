class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.length();
        int k = 1;
        string temp = string(s);
        if(s == goal)
            return true;

        while (k < n) {
            int first = k % n;
            for (int i = 0; i < n; i++) {
                temp[(i + first) % n] = s[i];
            }
            if(temp == goal)
                return true;
            k++;
        }
        return false;
    }
};