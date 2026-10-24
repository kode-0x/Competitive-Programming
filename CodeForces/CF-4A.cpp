// Given an integer 'w', print 'YES' if it can be divided into two positive even integers; otherwise, print 'NO'

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int w;
    cin >> w;
    cout << (w > 2 && w % 2 == 0 ? "YES" : "NO") << '\n';
    return 0;
}