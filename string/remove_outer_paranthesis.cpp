class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> temp;
        string ans = "";
        string part = "";

        for(char ch : s){
            if(ch == '('){
                temp.push(ch);
            }
            else{
                temp.pop();
            }
            part += string(1, ch);

            if(temp.empty()){
                if(part.length() != 2){
                    for(int i = 1; i < part.length()-1; i++){
                        ans += string(1, part[i]);
                    }
                    cout << "part : "<<part << endl;
                    cout << "ans  : "<<ans << endl;
                }
                else{
                    ans+="";
                }
                part = "";
            }
        }
        cout << ans;
        return ans;
    }
};