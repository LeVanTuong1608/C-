#include <bits/stdc++.h>

using namespace std;


string check(string a,string b){
	return a+b;
}
int main(){
	int t;cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		string x="";
		x=check(a,b);
		cout<<x<<endl;
	}
	return 0;
}