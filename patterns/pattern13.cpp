#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter Number of rows:";
    cin >> row;
    int sum = 1;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << sum++ << " ";
        }
        cout << endl;
    }

    return 0;
}