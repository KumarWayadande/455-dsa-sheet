#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter Number of rows:";
    cin >> row;
    int sum = 1;
    char ch = 'A';
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << ch++ << " ";
        }
        cout << endl;
        ch = 'A';
    }

    return 0;
}