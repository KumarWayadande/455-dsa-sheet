#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter Number of rows:";
    cin >> row;
    int sum;
    for (int i = 1; i <= row; i++)
    {
        if (i % 2 == 0)
            sum = 1;
        else
            sum = 0;

        for (int j = 0; j <= (row - i); j++)
        {
            cout << sum << " ";
            if (sum == 1)
            {
                sum = 0;
                continue;
            }
            if (sum == 0)
            {
                sum = 1;
            }
        }
        cout << endl;
    }

    return 0;
}