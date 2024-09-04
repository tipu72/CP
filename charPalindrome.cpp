#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
int idx[N];

void mySolution()
{
	int n;
	cin>>n;
	char arr[20];
	cin>>arr;	//abcba or abcde
	cout<<arr<<"\n";
	
	bool flag=1;
	for(int i=0; i<n; i++){
		if(arr[i]!=arr[n-1-i]){
			flag=0;
			break;
		}
	}
	
	if(flag) cout<<"palindrome";
	else cout<<"not palindrome";
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  
	int T=1; //cin>>T;
	while(T--) mySolution();

	return 0;
}