#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 2;
int idx[N];

void mySolution()
{
	int n, s;
	cin >> n >> s;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int i = 0, j = 0, sum = 0, st = -1, ed = -1;

	while (j < n && sum + arr[j] <= s)
	{
		sum += arr[j];
		j++;
	}

	if (sum == s)
	{
		cout << i + 1 << " " << j << endl;
		return;
	}

	while (j < n)
	{
		sum += arr[j];

		while (sum > s)
		{
			sum -= arr[i];
			i++;
		}

		if (sum == s)
		{
			st = i + 1;
			ed = j + 1;
			break;
		}

		j++;
	}

	cout << st << " " << ed << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		mySolution();
	}
}
