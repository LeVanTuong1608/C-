#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--){
	
		string s,tmp;
		getline(cin,s); 
	//	cin>>s;
		string word;
		cin>>word;
		stringstream ss(s);
		while (ss>>tmp){
			if (tmp!=word) cout<<tmp<<" ";
		}
	}
}
