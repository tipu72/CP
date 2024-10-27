#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

void updateArr(vector<int> &sumArr, int x)
{
    for (int i = 0; i < 32; i++)
    {
        int ith_bit = x & (1 << i);
        if (ith_bit)
        {
            sumArr[i]++;
        }
    }
}

int numFromBits(vector<int> sumArr)
{
    int num = 0;
    for (int i = 0; i < 32; i++)
    {
        num += (sumArr[i] * (1 << i));
    }
    return num;
}

int uniqueNumber3(vector<int> arr)
{
    int n = arr.size();
    vector<int> sumArr(32, 0);

    for (int x : arr)
    {
        updateArr(sumArr, x);
    }

    for (int i = 0; i < 32; i++)
    {
        sumArr[i] %= 3;
    }

    return numFromBits(sumArr);
}

void mySolution()
{
    vector<int> arr = {1, 3, 5, 4, 1, 3, 5, 5, 3, 1};

    cout << uniqueNumber3(arr);
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