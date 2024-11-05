#include <bits/stdc++.h>
using namespace std;

const int Mod = 1e9 + 7;
const int N = 1e6 + 2;
int idx[N];

int power(int a, int b)
{
	int res = 0;
	while (b)
	{
		if (b & 1)
			res = (res + a) % Mod;
		a = (a + a) % Mod;
		b >>= 1;
	}
	return res;
}

void mySolution()
{
	int a, b;
	cin >> a >> b;

	cout << power(a, b);
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
