#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
int idx[N];

void mySolution()
{
	int n;
	cin>>n;
	cin.ignore();
	
	char arr[100];
	cin.getline(arr, n);
	cin.ignore();
	
	int i=0;
	int curlen=0, maxlen=0;
	int st=0, maxst=0;
	
	while(1){
		if(arr[i]==' '|| arr[i]=='\0'){
			if(curlen>maxlen) {
				maxlen=curlen;
				maxst=st;
			}
			curlen=0;
			st=i+1;
		}else curlen++;
		
		if(arr[i]=='\0') break;
		
		i++;
	}                           	
	
	cout<<maxlen<<"\n";
	for(int i=0; i<maxlen; i++){
		cout<<arr[i+maxst];
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