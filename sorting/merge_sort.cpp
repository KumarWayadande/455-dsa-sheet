
#include <iostream>
#include <vector>
using namespace std;
void merge(vector<int> &nums, int mid, int low, int high)
{
    vector<int> temp; // temporary array
    int left = low;      // starting index of left half of arr
    int right = mid + 1;   // starting index of right half of arr

    //storing elements in the temporary array in a sorted manner//

    while (left <= mid && right <= high) {
        if (nums[left] <= nums[right]) {
            temp.push_back(nums[left]);
            left++;
        }
        else {
            temp.push_back(nums[right]);
            right++;
        }
    }

    // if elements on the left half are still left //

    while (left <= mid) {
        temp.push_back(nums[left]);
        left++;
    }

    //  if elements on the right half are still left //
    while (right <= high) {
        temp.push_back(nums[right]);
        right++;
    }

    // transfering all elements from temporary to nums //
    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }

}

void mergeSort(vector<int> &nums, int low, int high)
{
    if (low >= high)
        return;
    int mid = (low + high) / 2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    merge(nums, mid, low, high);
}

void printArray(vector<int> &nums, int n)
{
    for (auto x : nums)
    {
        cout << x << " ";
    }
}

// Driver code
int main()
{
    vector<int> data = {10, 2, 3, 5, 3, 1, 2200, 293, 40, 50, 20, 90, 30};
    int n = data.size();

    cout << "Unsorted Array: \n";
    printArray(data, n);

    // perform quicksort on data
    mergeSort(data, 0, n - 1);

    cout << "\nSorted array in ascending order: \n";
    printArray(data, n);
}