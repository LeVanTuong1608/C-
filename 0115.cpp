#include <iostream>
#include <math.h>

using namespace std;

int main(){
		int t;
		cin>>t;
		while(t--){
			int n;
			cin>>n;
			int m=n;
			for (int i=2;i<=sqrt(m);i++){
				if (n%i==0){
					int h=0;
					while(n%i==0){
						h++;
						n/=i;
					}
					cout<<i<<" "<<h<<" ";
				}
			}
			if (n!=1) cout<<n<<" "<<1;
			cout<<endl;
			}

}
