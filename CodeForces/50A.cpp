// Given an 'M x N' board and unlimited '2 x 1' dominoes, find the maximum number of dominoes that can be placed without overlapping or extending beyond the board

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    cout << (m * n) / 2 << '\n';
    return 0;
}