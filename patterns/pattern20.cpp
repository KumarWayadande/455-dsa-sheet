#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter Number of rows:";
    cin >> row;

    char ch = 'A';

    for (int i = 0; i < row; i++)
        cout << "* ";
    cout << endl;
    for (int i = 1; i < row; i++)
    {
        cout << "*";
        for (int j = 0; j <= row + 1; j++)
        {
            cout << " ";
        }
        cout << "*";
        cout << endl;
    }
    for (int i = 0; i < row; i++)
        cout << "* ";
    return 0;
}