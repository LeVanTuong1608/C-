#include <iostream>

using namespace std;

long long check(long long n){
	int t=0;
	while(n){
		if (n%10==0||n%10==6||n%10==8){
			
		}
		else return 0;
		n/=10;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if (check(n)){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}
