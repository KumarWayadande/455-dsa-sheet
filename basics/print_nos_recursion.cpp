#include <iostream>
using namespace std;

// int print(int num, int count = 0){
//     if(count == num) return 0;
//     cout << count << " ";
//     print(num, ++count);
// }

void printNos(int N)
{
    // Your code here
    if (N == 0)
        return;

    printNos(N - 1);
    cout << N << " ";
}

int main(int argc, char const *argv[])
{
    printNos(10);
    return 0;
}
