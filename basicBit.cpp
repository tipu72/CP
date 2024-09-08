#include <bits/stdc++.h>
using namespace std;

const int N=1e6+2;
int idx[N];

int getBit(int n, int p){
	return ((n & (1<<p))!=0);
}

int setBit(int n, int p){
	return ((n | (1<<p)));
}

int clearBit(int n, int p){
	//int mask=~(1<<p);
	return (n & ~(1<<p));
}

int updateBit(int n, int p, int v){
	int clear=(n & ~(1<<p));
	return (clear | (v<<p));
}

int countOne(int n){
	int count=0;
	while(n){
		n = n & (n-1);
		count++;
	}
	return count;
}

int isPowerOfTwo(int n){
	return (n && !(n & (n-1)));
}

void mySolution()
{
	int n,p,v;
	cin>>n>>p>>v;
	
	//cout<<(1<<n);	
	cout<<countOne(n);
	//cout<<isPowerOfTwo(n);
	//cout<<getBit(n,p);
	//cout<<setBit(n,p);
	//cout<<clearBit(n,p);
	//cout<<updateBit(n,p,v);

}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  
	int T=1; //cin>>T;
	while(T--) mySolution();

	return 0;
}
