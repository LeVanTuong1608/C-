#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,s=0,tong=0;
		cin>>n;
		s=n+1;
		if (n%2==0){
			for (int i=1;i<=n/2;i++){
				tong+=s;
			}
		}else{
				for (int i=1;i<=n/2;i++){
					tong+=s;}
					tong=tong+n/2+1;
		}
		cout<<tong<<endl;
	}
	return 0;
}
