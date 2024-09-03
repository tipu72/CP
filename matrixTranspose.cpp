#include <bits/stdc++.h>
using namespace std;

const int N=1e6+2;
int idx[N];

void mySolution()
{
	int n,m;
	cin>>n>>m;
	int arr[n][m];
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>arr[i][j];
		}
	}
	
	for(int i=0; i<n; i++){
		for(int j=i; j<m; j++){
			int temp=arr[i][j];
			arr[i][j]=arr[j][i];
			arr[j][i]=temp;
		}
	}
	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<"\n";
	}
		
	
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  
	int T=1; //cin>>T;
	while(T--) mySolution();

	return 0;
}
