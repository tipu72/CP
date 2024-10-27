#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

void overLayNumber(char arr[], int number)
{
    int j = 0;
    while (number > 0)
    {
        int last_bit = number & 1;
        if (last_bit)
        {
            cout << arr[j];
        }
        j++;
        number = number >> 1;
    }
    cout << endl;
}

void genSubSets(char arr[])
{
    int n = strlen(arr);
    for (int i = 0; i < (1 << n); i++)
    {
        overLayNumber(arr, i);
    }
    return;
}

void mySolution()
{
    char arr[100];
    cin >> arr;
    genSubSets(arr);
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