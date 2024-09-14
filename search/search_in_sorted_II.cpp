#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        set<int> newNumsSet;
        for (auto x : nums)
            newNumsSet.insert(x);

        int low = 0, n = newNumsSet.size(), high = n - 1;
        vector<int> newNums;

        cout << endl << "ELement of set \n";
        for(auto x : newNumsSet){
            cout << x << "  ";
        }

        for(auto x : newNumsSet){
            newNums.insert(newNums.end(), x);
        }

        cout << endl << "ELement of vector \n";
        for(auto x : newNums){
            cout << x << "  ";
        }

        while (low <= high)
        {
            int med = (low + high) / 2;

            if (newNums[med] == target)
            {
                return true;
            }
            else if (newNums[med] < target)
            {
                low = med + 1;
            }
            else if (newNums[med] > target)
            {
                high = med - 1;
            }
        }

        return false;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1};
    int target = 0;

    cout << endl << s.search(nums, target);

    return 0;
}