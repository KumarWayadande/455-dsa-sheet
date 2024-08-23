#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool reverseArray(string &s, int start, int last)
{
    if (start > last)
        return true;

    if (s[start] != s[last])
        return false;

    return reverseArray(s, start + 1, last - 1);
}

int main(int argc, char const *argv[])
{
    string s = "ABCDCBAA";
    cout << (reverseArray(s, 0, s.length() - 1) ? "Palindrome" : "Not a Palindrome");

    return 0;
}
