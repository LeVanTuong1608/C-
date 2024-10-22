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
	int t;
	cin>>t;
	while(t--){
		
		int n;
		cin>>n;
		for (int i=2;i<=sqrt(n);i++){
			if (nguyento(i)==1){
				cout<<i*i<<" ";
			}
		}
		cout<<endl;
		
	}
}
