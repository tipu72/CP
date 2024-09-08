#include <bits/stdc++.h>
using namespace std;

const int N=1e6+2;
int idx[N];

int getBit(int n, int pos){
	return ((n & (1<<pos))!=0);
}

int setBit(int n, int pos){
	return (n | (1<<pos));
}
// int setBit(int n, int pos){
	// return ((n & (1<<pos))!=0);
// }

int findUniqueElement(int arr[], int n){
	int xorsum=0;
	for(int i=0; i<n; i++){
		xorsum^=arr[i];
	}
	return xorsum;
}

int findUniqueElements(int arr[], int n){
	int result=0;
	for(int i=0; i<64; i++){
		int sum=0;
		for(int j=0; j<n; j++){
			if(getBit(arr[j], i)){
				sum++;
			}
		}
		if(sum%3!=0){
			result=setBit(result, i);
		}
	}
	return result;
}


void findUniqueTwoElements(int arr[], int n){
	int xorsum=0;
	for(int i=0; i<n; i++){
		xorsum^=arr[i];
	}

	int tempxor=xorsum;
	int setbit=0;
	int pos=0;
	while(setbit!=1){
		setbit = xorsum & 1;
		pos++;
		xorsum=xorsum>>1;
	}	
	
	int newxor=0;
	for(int i=0; i<n; i++){
		if(getBit(arr[i],pos-1)){
			newxor^=arr[i];
		}
	}
	
	cout<<newxor<<"\n";
	cout<<(tempxor^newxor)<<"\n";
}

void mySolution()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	
	//cout<<findUniqueElement(arr, n);
	cout<<findUniqueElements(arr, n);
	//findUniqueTwoElements(arr, n);
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  
	int T=1; //cin>>T;
	while(T--) mySolution();

	return 0;
}
