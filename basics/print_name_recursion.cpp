#include<iostream>
using namespace std;

int printName(int num, int count = 0){
    if(count == num)    return 0;
    cout << "Kumar" << endl;
    printName(num, ++count);
}

int main(int argc, char const *argv[])
{
    printName(10);
    return 0;
}
