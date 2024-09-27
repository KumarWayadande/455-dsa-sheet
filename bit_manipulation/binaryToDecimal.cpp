#include<iostream>
#include<cmath>
using namespace std;


int binaryToDecimal(string num){
    int sum = 0;
    int len = num.length();
    int i = len - 1;

    for(int j = 0; j < len; j++){
        int mul = num[j] == '0' ? 0 : 1;
        sum += (mul * pow(2, i));
        i--;
    }
    return sum;
}

int main(){
    string n = "10000";

    int ans = binaryToDecimal(n);
    cout << endl << "Answer : " << ans;

    return 0;
}