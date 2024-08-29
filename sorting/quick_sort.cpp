
#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> & nums, int low, int high)
{
    int index = low;
    int pivot = nums[high - 1];

    for (int i = low; i < (high - 1); i++)
    {
        if (nums[i] < pivot)
        {
            int temp = nums[i];
            nums[i] = nums[index];
            nums[index] = temp;
            index++;
        }
    }

    int temp = nums[index];
    nums[index] = pivot;
    nums[high - 1] = temp;

    return index;
}

void quickSort(vector<int> & nums, int low, int high)
{
    if (low < high)
    {

        // find the pivot element such that
        // elements smaller than pivot are on left of pivot
        // elements greater than pivot are on righ of pivot
        int pi = partition(nums, low, high);

        // recursive call on the left of pivot
        quickSort(nums, low, pi);

        // recursive call on the right of pivot
        quickSort(nums, pi + 1, high);
    }
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
    vector<int> data = {10,2, 3, 5, 3, 1, 2200, 293, 40,50,20,90,30};
    int n = data.size();

    cout << "Unsorted Array: \n";
    printArray(data, n);

    // perform quicksort on data
    quickSort(data, 0, n);

    cout << "\nSorted array in ascending order: \n";
    printArray(data, n);
}