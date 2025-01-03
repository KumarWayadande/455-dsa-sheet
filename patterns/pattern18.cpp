#include <iostream>
using namespace std;

int main()
{
    int row;

    cout << "Enter Number of rows:";
    cin >> row;

    char alphabet[26];

    for (int i = 0; i < 26; i++)
        alphabet[i] = 'a' + i; // Fill the array with 'a' to 'z'

    char ch = 'A';
    for (int i = 1; i <= row; i++)
    {
        int index = row - i;
        for (int j = 0; j < i; j++)
        {
            cout << alphabet[index++];
        }
        cout << endl;
    }

    return 0;
}