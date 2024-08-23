#include <iostream>
using namespace std;

int print(int num){
    if(num == 0)    return 0;
    cout << num << " "; 
    print(--num);
}

int main(int argc, char const *argv[])
{
    print(10);
    return 0;
}
