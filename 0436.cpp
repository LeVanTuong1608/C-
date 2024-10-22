#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		set<int>se;
		for (int i=0;i<n;i++){
			cin>>a[i];
			se.insert(a[i]);
		}
		vector<int>v;
		for (auto x:se){
			v.push_back(x);
		}
		//sort(b,b+n);
		//int x=0;
		for (int j=0;j<n;j++){
			int x=0;
			for (auto y:v){
				if (y>a[j]){
					cout<<y<<" ";
					x=1;
					break;
				}
			}
			if (x==0) cout<<"_"<<" ";
		}
		cout<<endl;
	}
}
