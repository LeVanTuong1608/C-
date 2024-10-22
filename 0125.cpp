#include <iostream>
#include <math.h>

using namespace std;
int nguyento(int n){
	int s=0;
	if(n<2) return 0;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int main(){
	
	int n,m,s=0;
	cin>>n>>m;
	if (n<m){
		for (int i=n;i<=m;i++){
			if (nguyento(i)==1){
				cout<<i<<" ";
			}
		}
	}
	else {
		for (int i=m;i<=n;i++){
			if (nguyento(i)==1){
				cout<<i<<" ";
			}
		}
	}
}

