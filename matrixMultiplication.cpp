#include <bits/stdc++.h>
using namespace std;

const int N=1e6+2;
int idx[N];

void mySolution()
{
	int m,n,p;
	cin>>m>>n>>p;
	
	int M1[m][n];
	int M2[n][p];
	int M3[m][p];
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cin>>M1[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<p; j++){
			cin>>M2[i][j];
		}
	}
	
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			M3[i][j]=0;
		}
	}
	
	
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			for(int k=0; k<n; k++)
				M3[i][j]+=M1[i][k]*M2[k][j];
		}
	}
	
	
	for(int i=0; i<m; i++){
		for(int j=0; j<p; j++){
			cout<<M3[i][j]<<" ";
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
