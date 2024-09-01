#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}

	// maximum subarray sum o(n*2)

	// int maxSum = INT_MIN;
	// for (int i = 0; i < n; ++i)
	// {
	// int sum  = 0;
	// for (int j = i; j < n; ++j)
	// {
	// sum += arr[j];
	// //cout << sum << "\n";
	// }
	//
	// maxSum = max(maxSum, sum);
	//
	// }

	// Kadanes algorithm for maximum subarray sum o(n)

	int curSum = 0;
	int maxSum = INT_MIN;

	for (int i = 0; i < n; i++)
	{
		if (curSum < 0)
			curSum = 0;
		curSum += arr[i];
		maxSum = max(maxSum, curSum);
	}

	cout << maxSum;

	return 0;
}