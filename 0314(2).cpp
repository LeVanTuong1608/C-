#include <bits/stdc++.h>


using namespace std;


int main(){
	int t;cin>>t;
	string x;
	cin.ignore();
	map<string,int>v;
	for (int i=0;i<t;i++){
		getline(cin,x);
		v[x]++;
	}
	
	cout<<v.size();
}