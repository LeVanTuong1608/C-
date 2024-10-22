#include <bits/stdc++.h>


using namespace std;

long long checkt(int a[],int n){
	long long s=0;
	for (int i=0;i<n;i++){
		s+=a[i];
	}
	return s;
}

long long checkp(int a[],int n,int m){
	long long s=0;
	for (int i=n-1;i<m;i++){
		s+=a[i];
	}
	return s;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int a[n];
		for (int i=0;i<n;i++){
			cin>>a[i];
		}
		int tmp=-100000;
		for (int i=1;i<n-1;i++){
//			if (checktrai(i)==checkphai(i,n))
			long long tongtrai,tongphai;
			tongtrai=checkt(a,i);
			tongphai=checkp(a,i,n);
			if(tongtrai==tongphai) tmp=i;
			if (tmp>=0) break;
		}
		if(tmp!=-100000) cout<<tmp<<endl;
		else cout<<-1<<endl;
	}
}