#include <iostream>
#include <math.h>
using namespace std;

int getPow(int base, int power)
{
    int sum = 1;
    while (power > 0)
    {
        sum = sum * base;
        power--;
    }

    return sum;
}

int main()
{

    for (int i = 1; i < 1000; i++)
    {
        int num = i;
        int sum = 0;
        while (num > 0)
        {
            int rem = num % 10;
            sum = sum + getPow(rem, 3);
            num = num / 10;
        }
        if(sum == i)
            cout << i << "  ";
    }

    return 0;
}