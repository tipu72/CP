#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

void mySolution()
{
    int n;
    cin >> n;
    if ((n & (n - 1)) == 0)
        cout << "power of 2";
    else
        cout << "isn't power of 2";
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
