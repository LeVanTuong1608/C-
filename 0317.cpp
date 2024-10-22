#include <bits/stdc++.h>

using namespace std;

int check( string s){
	int r=0, l=s.size()-1;
	while(r<=l){
		if (s[l]!=s[l]) return 0;
		else if (s[l]%2==1) return 0;
		else{
			r++;
			l--;
		}
	}
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		if (check(s)==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
