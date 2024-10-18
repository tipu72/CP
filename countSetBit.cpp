#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

int countSetBit(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        int last_bit = (n & 1);
        cnt += last_bit;
        n = n >> 1;
    }
    return cnt;
}

int countSetBitHack(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        cnt++;
    }
    return cnt;
}

void mySolution()
{
    int n;
    cin >> n;

    // cout << countSetBit(n);
    cout << countSetBitHack(n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T = 1;
    // cin >> T;
    while (T--)
        mySolution();

    return 0;
}
