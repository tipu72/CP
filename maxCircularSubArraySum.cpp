#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
int idx[N];

int kadane(int arr[], int n){
	int cursum=0;
	int maxsum=INT_MIN;
	for(int i=0; i<n; i++){
		cursum+=arr[i];
		if(cursum<0) cursum=0;
		maxsum=max(maxsum,cursum);
	}
	
	return maxsum;
}

void mySolution()
{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0; i<n; i++){
		cin>>arr[i];	
	}
	
	int wrapsum;
	int nonwrapsum;
	
	nonwrapsum=kadane(arr, n);
	
	int totalsum=0;
	for(int i=0; i<n; i++){
		totalsum+=arr[i];
		arr[i]=-arr[i];
	}
	
	wrapsum=totalsum+kadane(arr,n);
	
	cout <<max(wrapsum,nonwrapsum);
}

int main()
{
	int t=1;
	//cin>>t;
	while(t--){
		mySolution();
	}

	return 0;
}