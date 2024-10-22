#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
		int n;
		cin>>n;
		for (int i=2;i<=sqrt(n);i++){
			if (n%i==0){
				int h=0;
				while(n%i==0){
					h++;
					n/=i;
				}
				cout<<i<<" "<<h<<endl;
			}
		}
		if (n>1) cout<<n<<" "<<"1";
		cout<<endl;

}
