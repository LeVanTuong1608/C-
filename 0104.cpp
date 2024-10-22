#include <iostream>
using namespace std;

int main(){
	int t;
	long long s=0,a=1;
	cin>>t;
	for(int i=1;i<=t;i++){
		a=a*i;
		s=s+a;
	}
	cout<<s;

}

