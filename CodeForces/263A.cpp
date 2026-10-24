// Given a '5 x 5' matrix containing twenty-four zeros and one '1', find the minimum number of swaps of adjacent rows or columns required to move the '1' to the center cell at row '3', column '3'

#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int x;
            cin >> x;

            if (x == 1)
            {
                cout << abs(i - 2) + abs(j - 2) << '\n';
                return 0;
            }
        }
    }

    return 0;
}