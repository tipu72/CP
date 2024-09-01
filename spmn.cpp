#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
//int idx[N];
bool check[N];

void mySolution()
{
	int n, s;
	cin>>n>>s;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}
	
	for (int i = 0; i < N; ++i){
		check[i] = 0;
	}

	for (int i = 0; i < n; ++i){
		if (arr[i]>=0){
			check[arr[i]] = 1;
		}
	}
	
	int ans = -1;

	for (int i = 1; i < N; ++i){
		if (check[i]==0){
			ans=i;
			break;
		}
	}
		
	cout << ans << endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		mySolution();
	}
}
