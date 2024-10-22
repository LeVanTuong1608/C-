#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string s;
//		cin>>s;
		getline(cin,s);
		long long tong=0;
		multiset<char>mp;
		for (int i=0;i<s.size();i++){
			if (isdigit(s[i])){
				long long cmp=s[i]-'0';
				tong+=cmp;
			}
			else{
				mp.insert(s[i]);
			}
		}
		for (auto x: mp){
			cout<<x;
		}
		cout<<tong<<endl;
	}
}