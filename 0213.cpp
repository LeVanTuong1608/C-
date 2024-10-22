#include <bits/stdc++.h>

using namespace std;
int check(int n){
	if (n==0||n==1) return 1;
	int a=0;
	int b=1;
	while(b<n){
		int tmp=b;
		b=b+a;
		a=tmp;
	}
	if (b==n) return 1;
	return 0;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vector<int>v;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
			if (check(a[i])==1){
				v.push_back(a[i]);
			}
		}
		for (auto s=0;s<v.size();s++){
			cout<<v[s]<<" ";
		}
		cout<<endl;
	}
}