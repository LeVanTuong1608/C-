#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int nguyento(int n){
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}
int tong(int n){
	int tong=0;
	while(n>0){
		tong+=n%10;
		n/=10;
	}
	return tong;
}
int check(int n){
	int tong1=0,tong2=tong(n);
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			while(n%i==0){
				tong1+=tong(i);
				n/=i;
			}
		}
	}
	if (n>1) tong1+=tong(n);
//	cout<<tong1<<" "<<tong2<<endl;
	if (tong1==tong2) return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if (check(n)==1&& nguyento(n)==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
