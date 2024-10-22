#include <iostream>
#include <math.h>
using namespace std;

int main(){
	long n,m;
	int s=0;
	cin>>n;
	m=n;
	for (int i=2;i<=sqrt(m);i++ ){
		if (n%i==0){
			
			while (n%i==0){
				s++;
				n/=i;
			}
		}
		if (s!=0){
			cout<<i<<" "<<s<<endl;
		}
		s=0;
	}
	if (n!=1){
		cout<<n<<" "<<1;
	}
}
