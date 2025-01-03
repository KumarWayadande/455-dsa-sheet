#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter Number of rows:";
    cin >> row;

    char ch = 'A';
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < (row - i); j++)
            cout << " ";

        for (int j = 0; j < i; j++)
            cout << ch++;

        ch--;
        for (int j = 0; j < i - 1; j++)
            cout << --ch;

        ch = 'A';
        cout << endl;
    }

    return 0;
}