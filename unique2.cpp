#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

void uniqueNumber2(vector<int> arr)
{
    int n = arr.size();
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        result ^= arr[i];
    }

    int pos = 0;
    int temp = result;

    while ((temp & 1) == 0)
    {
        pos++;
        temp = temp >> 1;
    }

    int setA = 0;
    int setB = 0;
    int mask = 1 << pos;

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & mask) > 0)
        {
            setA ^= arr[i];
        }
        else
        {
            setB ^= arr[i];
        }
    }

    cout << setA << endl;
    cout << setB << endl;
}

void mySolution()
{
    vector<int> arr = {1, 3, 5, 4, 1, 3, 5, 7};

    uniqueNumber2(arr);
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