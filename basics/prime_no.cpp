#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number = 0;
    cout << "Enter a Number:";
    cin >> number;

    int temp = number-1;
    bool flag = false;
    while (temp > 1)
    {
        if ((number % temp) == 0)
        {
            flag = true;
            break;
        }
        temp--;
    }

    if (flag)
        cout << "Not a Prime Number";
    else
        cout << "Prime Number";

    return 0;
}
