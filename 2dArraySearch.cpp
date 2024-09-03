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
	
	int k;
	cin>>k;
	int flag=0;
	
	//O(n*m) complexity
	
	// for(int i=0; i<n; i++){
		// for(int j=0; j<m; j++){
			// if(arr[i][j]==k){
				// cout<<arr[i][j]<<"\n";
				// flag=1;
			// }
		// }
	// }
	
	//O(n+m) complexity
	
	int r=0, c=n-1;
	while(r<m && c>=0){
		if(arr[r][c]==k) flag=1;
		arr[r][c]>k?c--:r++;
	}
	
	if(flag) cout<<"yes";
	else cout<<"no";
	
	

}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  
	int T=1; //cin>>T;
	while(T--) mySolution();

	return 0;
}
