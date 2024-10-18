#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

int getIthBit(int n, int p)
{
    int mask = (1 << p);
    return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int &n, int p)
{
    int mask = (1 << p);
    n = (n | mask);
}

void clearIthBit(int &n, int p)
{
    int mask = ~(1 << p);
    n = (n & mask);
}

void clearLastIthBit(int &n, int p)
{
    int mask = (-1 << p);
    n = (n & mask);
}

void updateIthBit(int &n, int p, int v)
{
    clearIthBit(n, p);
    int mask = (v << p);
    n = n | mask;
}

void clearBitInRange(int &n, int i, int j)
{
    int a = (-1 << (j + 1));
    int b = (1 << i) - 1;
    int mask = a | b;
    n = n & mask;
}

void replaceBitsInRange(int &n, int i, int j, int k)
{
    clearBitInRange(n, i, j);
    int mask = (k << i);
    n = n | mask;
}

void mySolution()
{
    int n, p;
    cin >> n >> p;

    // cout << getIthBit(n, p);
    // setIthBit(n, p);
    // clearIthBit(n, p);
    // clearLastIthBit(n, p);
    // clearBitInRange(n, p, 3);
    replaceBitsInRange(n, p, 3, 2);
    // updateIthBit(n, p, 1);
    cout << n;
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
