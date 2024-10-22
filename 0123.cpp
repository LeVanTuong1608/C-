#include <iostream>
#include <math.h>

using namespace std;

int nguyento(long n){
	int s=0;
	if (n<2){
		return 0;
	}
	else{
		for (int i=2;i<=sqrt(n);i++){
			if (n%i==0){
				return 0;
			}
		}
	}
	return 1;
}

int main(){
	long n;
	cin>>n;
	int c=nguyento(n);
	if (c==1) cout<<"YES";
	else cout<<"NO";
}
