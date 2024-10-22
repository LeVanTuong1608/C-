#include <iostream>

using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long a=1;
		long long b=0;
		for (int i=2;i<=n;i++){
			long long tmp=a;
			a=a+b;
			b=tmp;
			
		}
		cout<<a<<endl;
	}
}
