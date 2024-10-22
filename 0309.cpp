#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--){
		string s;
		getline (cin,s);
		int dem=0;
		stringstream ss(s);
		string word;
		while( ss >> word){
			dem++;
		}
		cout<<dem<<endl;
	}
}
