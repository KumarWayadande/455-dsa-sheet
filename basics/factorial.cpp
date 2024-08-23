#include<iostream>
using namespace std;


int fact(int num, int i = 1){
    if(num == 0) return i;

    i = i * num;
    fact(--num, i);
}


// num = 5,     i = 1

// Case 1   i = 1, num = 5
// Case 2   i = 1, num = 4, i = 

int main(int argc, char const *argv[])
{
    int num = 5;

    cout << fact(5);

    /*

    Iterative Approach

    int sum = 1;
    for(int i = 1; i <= num; i++)
         sum = sum * i;

    cout << sum;

    */

    /*
        Recursive Approach
    */
    return 0;
}


