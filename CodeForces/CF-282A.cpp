// Given 'n' statements containing '++' or '--' and 'x', with initial 'x = 0', find the final value of 'x' after executing all statements

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x = 0;
    cin >> n;

    while (n--)
    {
        string s;
        cin >> s;

        if (s[1] == '+')
            x++;
        else
            x--;
    }

    cout << x << '\n';
    return 0;
}