#include <bits/stdc++.h>

using namespace std;

int main(){
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
