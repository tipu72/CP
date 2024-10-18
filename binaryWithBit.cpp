#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

int binaryWithBit(int n)
{
    int cnt = 0;
    int p = 1;
    while (n > 0)
    {
        int last_bit = n & 1;
        cnt += p * last_bit;
        p = p * 10;
        n = n >> 1;
    }
    return cnt;
}

void mySolution()
{
    int n;
    cin >> n;

    cout << binaryWithBit(n);
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
