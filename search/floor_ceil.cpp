#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int findFloor(vector<int> &nums, int n, int target)
{
    int low = 0, high = n - 1, ans = -1;

    while (low <= high)
    {
        int med = (low + high) / 2;
        if (nums[med] <= target)
        {
            ans = med;
            low = med + 1;
        }
        else
            high = med - 1;
    }

    return ans;
}
int findCeil(vector<int> &nums, int n, int target)
{
    int low = 0, high = n - 1, ans = -1;

    while (low <= high)
    {
        int med = (low + high) / 2;
        if (nums[med] >= target)
        {
            ans = med;
            high = med - 1;
        }
        else
            low = med + 1;
    }

    return ans;
}

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x)
{
    pair<int, int> result;
    int floor = findFloor(a, n, x);
    int ceil = findCeil(a, n, x);

    if (floor == -1)
        result.first = -1;
    else
        result.first = a[floor];
    if (ceil == -1)
        result.second = -1;
    else
        result.second = a[ceil];

    return result;
}

int main()
{
    vector<int> a = {3, 4, 4, 7, 8, 10};
    int key = 2;

    pair<int, int> result = getFloorAndCeil(a, a.size(), key);

    cout << "\n\n Floor : " << result.first;
    cout << "\n Ceil  : " << result.second;

    return 0;
}