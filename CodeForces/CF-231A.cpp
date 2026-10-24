// Count each problem where at least two friends are sure about the solution

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;

    while (n--)
    {
        int p, v, t;
        cin >> p >> v >> t;

        if (p + v + t >= 2)
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}