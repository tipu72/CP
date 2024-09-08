#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
int idx[N];

void generateSubSet(int arr[], int n){
	for(int i=0; i<(1<<n); i++){
		for(int j=0; j<n; j++){
			if(i & (1<<j)){
				cout<<arr[j]<<" ";
			}
		}
		cout<<"\n";
	}
}

void mySolution()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	generateSubSet(arr,n);
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  
	int T=1; //cin>>T;
	while(T--) mySolution();

	return 0;
}