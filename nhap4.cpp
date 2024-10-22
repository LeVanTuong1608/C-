#include <bits/stdc++.h>

using namespace std;
int tang(int n){
	int cmp=0;
	int c=n%10;
	n/=10;
	while(n>0){
		int d=n%10;;
		if(c<=d) return 0;
		c=d;
		n/=10;
	}
	return 1;
}

int giam(int n){
	int cmp=0;
	int c=n%10;
	n/=10;
	while(n>0){
		int d=n%10;;
		if(c>=d) return 0;
//		if(c==d) return 0;
		c=d;
		n/=10;
	}
	return 1;
}
int nguyento(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int tang2(int n){
	int b[15];
	int t=0;
	while(n>0){
		b[t++]=n%10;
		n/=10;	
	}
	for (int i=0;i<t-1;i++){
		if (b[i]<=b[i+1] ) return 0;
	}
	return 1;
}
int giam2(int n){
	int b[15];
	int t=0;
	while(n>0){
		b[t++]=n%10;
		n/=10;	
	}
	for (int i=0;i<t-1;i++){
		if (b[i]>=b[i+1] ) return 0;
	}
	return 1;
}
void check(int n){
	int t=0;
	for (int i=pow(10,n-1);i<pow(10,n);i++){
		if(nguyento(i)==1){
			if(tang2(i)==1||giam2(i)==1){
				t++;
//				cout<<i<<" ";
			}
		}
	}
//	cout<<endl;
	cout<<t<<endl;
}

int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		check(n);
	}
}