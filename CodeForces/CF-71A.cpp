// Given 'n' words, replace each word longer than 10 characters with its first letter, the number of letters between the first and last letters, and its last letter; leave all other words unchanged

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        string str;
        cin >> str;

        if (str.size() > 10)
            cout << str[0] << str.size() - 2 << str[str.size() - 1] << '\n';
        else
            cout << str << '\n';
    }

    return 0;
}