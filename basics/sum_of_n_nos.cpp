#include <iostream>
using namespace std;

int print(int num, int sum = 0){
    if(num == 0)    return sum;
    sum += num;
    print(--num, sum);
}

int main(int argc, char const *argv[])
{
    cout << print(5);
    return 0;
}
