#include<iostream>
#include<algorithm>
using namespace std;


string decimalToBinary(int num){
    int n = num;
    string ans;
    while(n != 1){
        if(n % 2 == 0)
            ans += '0';
        else
            ans += '1';
        n = n / 2;
    }
    ans += '1';
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n = 16;

    string ans = decimalToBinary(n);
    cout << endl << "Answer : " << ans;

    return 0;
}