#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+2;
int idx[N];

void mySolution()
{
	string s;
	cin>>s;
	int letter[26];
	for(int i=0; i<26; i++){
		letter[i]=0;
	}
	
	for(int i=0; i<s.size(); i++){
		letter[s[i]-'a']++;
	}
	
	char ans='a';
	int maxf=0;
	
	for(int i=0; i<26; i++){
		if(letter[i]>maxf){
			maxf=letter[i];
			ans=i+'a';
		}
	}
	
	cout<<maxf<<" "<<ans;
	
}

int main()
{
	ios::sync_with_stdio(false);
  	cin.tie(nullptr);
  
	int T=1; //cin>>T;
	while(T--) mySolution();

	return 0;
}