// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    
   int num1 = 20;
   int num2 = 15;
   
   int min1 = min(num1, num2);
    
    int minLastDivisor = 1;
    for(int i = 1; i < min1; i++){
        if((min1 % i) == 0){
            minLastDivisor = i;
        }
    }
    
    // cout << minLastDivisor << endl;
    
    int max1 = max(num1, num2);
    int maxLastDivisor = 1;
    vector<int> ans;
    for(int i = 1; i < max1; i++){
        if((max1 % i) == 0){
            maxLastDivisor = i;
            if(minLastDivisor == maxLastDivisor)
                {
                    ans.insert(ans.end(), minLastDivisor);
                    ans.insert(ans.end(), maxLastDivisor);
                    break;
                }
        }
    }
    
    for(auto x : ans){
        cout << x << endl;
    }

    return 0;
}