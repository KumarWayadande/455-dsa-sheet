class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if(s == t)
        //     return true;
        // else 
        //     return false;
        map<char, int> charMap;
        for(char x : s){
            charMap[x]++;
        }
        for(char x : t){
            charMap[x]--;
        }
        for(auto x : charMap){
            if(x.second != 0){
                return false;
            }
        }

        return true;

    }
};