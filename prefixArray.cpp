#include <bits/stdc++.h>
using namespace std;

#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

int main(int argc, char const *argv[])
{
	TxtIO;
	int mx = INT_MIN;
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	
	for (int i = 0; i < n; ++i)
	{
		mx = max(mx, arr[i]);
		cout << mx << " ";
	}

	cout << endl;

	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}