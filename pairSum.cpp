#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
int idx[N];

bool pairSum(int arr[], int n, int k){
	int lo=0;
	int hi=n-1;
	
	while(lo<hi){
		if(arr[lo]+arr[hi]==k){
			cout<<lo<<" "<<hi<<endl;
			return 1;	
		}else if(arr[lo]+arr[hi]>k) hi--;
		else lo++;
	}
	
	return 0;
}

void mySolution()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	int k;
	cin>>k;
	
	cout<<pairSum(arr,n,k);
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