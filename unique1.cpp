#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

int uniqueNumber(vector<int> arr)
{
    int n = arr.size();
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result ^= arr[i];
    }
    return result;
}

void mySolution()
{
    vector<int> arr = {1, 3, 5, 2, 1, 3, 5};

    cout << uniqueNumber(arr);
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