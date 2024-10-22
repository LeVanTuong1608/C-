#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		string a;
		cin>>a;
		int s=1;
		for (int i=1;i<a.size();i++){
			if (a[i]!=a[i-1]) {
				cout<<a[i-1]<<s;
				s=1;
			}
			else s++;
		}
		cout<<a[a.size()-1]<<s<<endl;
	}
}
