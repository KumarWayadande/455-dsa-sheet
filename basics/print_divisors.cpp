#include <iostream>
#include <vector>
using namespace std;

vector<int> getDivisors(int num)
{
    vector<int> ans;
    for (int i = 1; i < num; i++)
    {
        if ((num % i) == 0)
        {
            ans.insert(ans.end(), i);
        }
    }
    ans.insert(ans.end(), num);

    return ans;
}

int main()
{
    for(auto x : getDivisors(36)){
        cout << x << "  ";
    }
    return 0;
}