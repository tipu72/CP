#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
int idx[N];

void mySolution()
{
	// initial char array
	char arr[100];
	cin>>arr;
	//int n=sizeof(arr)/sizeof(char); //char array size
	int i=0;
	while(arr[i]!='\0'){
		cout<<arr[i]<<" ";
		i++;
	}
	cout<<"\n";
	
	//Palindrome check
	int n;
	cin>>n;
	char ar[20];
	cin>>ar;
	cout<<ar<<"\n";
	
	bool flag=1;
	for(int i=0; i<n; i++){
		if(ar[i]!=ar[n-1-i]){
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