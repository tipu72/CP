#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+2;
int idx[N];

void mySolution()
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++){
		cin>>arr[i];
	}
	
	for (int i = 0; i < N; i++){
		idx[i] = -1;
	}
	
	int minidx = INT_MAX;
	for (int i = 0; i < n; i++){
		if (idx[arr[i]] != -1){
			minidx = min(minidx, idx[arr[i]]);
		}else{
			idx[arr[i]] = i;
		}
	}
	
	if (minidx == INT_MAX){
		cout << "-1";
	}else{
		cout << minidx+1;
	}
		
}

int main()
{
	int t;
	cin>>t;
	while(t--){
		mySolution();
	}
}
