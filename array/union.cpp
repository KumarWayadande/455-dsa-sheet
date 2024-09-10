#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    vector<int> unionArray(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> result;
        map<int, int> hashMap;

        for(int i = 0; i < nums1.size(); i++){
            for(int j = 0; j < nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    hashMap[nums1[i]]++;
                }
            }   
        }

        for(auto x : hashMap){
            result.insert(result.end(), x.first);
        }

        return result;
    }
    void display(vector<int> &nums)
    {
        for (auto x : nums)
            cout << x << "  ";
    }
};

int main()
{

    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {100, 2, 3, 4, 930};
    // vector<int> nums = {-1, -100, 3, 99};

    Solution s;

    // cout << "\n Array before Rotation\n";
    // s.display(nums);

    cout << "\n Array after Rotation\n";
    // s.display((s.unionArray(nums1, nums2)));
    vector<int> result = s.unionArray(nums1, nums2);
    s.display(result);

    return 0;
}