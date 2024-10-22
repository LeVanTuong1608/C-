#include <bits/stdc++.h>


using namespace std;


int main(){
	int t;cin>>t;
	while(t--){
		int n,m,k,cmp=0;
		cin>>n>>m>>k;
		set<long long>s;
		map<long long ,int>mp;
		long long a[n],b[m],c[k];
		for (int i=0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}
		for (auto i : s){
			mp[i]++;
		}
		s.clear();
		for (int i=0;i<m;i++){
			cin>>b[i];
			s.insert(b[i]);
		}
		for (int i=0;i<s.size();i++){
			mp[b[i]]++;
		}
		s.clear();
		for (int i=0;i<k;i++){
			cin>>c[i];
			s.insert(c[i]);
		}
		for (int i=0;i<s.size();i++){
			mp[c[i]]++;
		}
		
		for (auto x: mp){
			if (x.second>=3){
				cmp++;
				cout<<x.first<<" ";
			}
		}
	 	if (cmp!=0) ;
		else cout<<-1;
		cout<<endl;
	}
}