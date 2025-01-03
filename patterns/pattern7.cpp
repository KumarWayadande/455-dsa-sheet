#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter Number of rows:";
    cin >> row;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
            cout << " ";

        for (int k = 0; k <= (row - i); k++)
            cout << "*";

        for (int m = 0; m <= (row - i - 1); m++)
            cout << "*";

        cout << endl;
    }

    return 0;
}