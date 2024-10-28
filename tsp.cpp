#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

int tsp(vector<vector<int>> dist, int setOfCity, int city, int n)
{
    if (setOfCity == (1 << n) - 1)
    {
        return dist[city][0];
    }

    int ans = INT_MAX;

    for (int choice = 0; choice < n; choice++)
    {
        if ((setOfCity & (1 << choice)) == 0)
        {
            int subProb = dist[city][choice] + tsp(dist, setOfCity | (1 << choice), choice, n);
            ans = min(ans, subProb);
        }
    }
    return ans;
}

void mySolution()
{
    vector<vector<int>> dist = {
        {0, 20, 42, 25},
        {20, 0, 30, 34},
        {42, 30, 0, 10},
        {25, 34, 10, 0}};

    int n = 4;

    cout << tsp(dist, 1, 0, n);
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