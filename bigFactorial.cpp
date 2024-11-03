#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;
int idx[N];

void multiply(vector<int> &a, int no, int &size)
{
    int carry = 0;
    for (int i = 0; i < size; i++)
    {
        int product = a[i] * no + carry;
        a[i] = product % 10;
        carry = product / 10;
    }

    while (carry)
    {
        a[size] = carry % 10;
        carry /= 10;
        size++;
    }
}

void bigFactorial(int n)
{
    vector<int> a(1000, 0);

    a[0] = 1;
    int size = 1;

    for (int i = 2; i <= n; i++)
    {
        multiply(a, i, size);
    }

    for (int i = size - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    cout << endl;
}

void mySolution()
{
    int n;
    cin >> n;

    bigFactorial(n);
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