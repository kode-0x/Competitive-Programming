// Given 'n' participants and their non-increasing scores, count how many participants have a positive score greater than or equal to the score of the participant in k-th place

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int cnt = 0;
    for (int x : a)
    {
        if (x >= a[k - 1] && x > 0)
            cnt++;
    }

    cout << cnt << '\n';
    return 0;
}