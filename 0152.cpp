#include <iostream>
#include <math.h>

using namespace std;
int check(int n, int a,int m){
	if ((n*a)%m==1) return 1;
	return 0;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,m,c=0;
		cin>>a>>m;
		for (int i=0;i<m;i++){
			if (check(i,a,m)==1){
				cout<<i<<endl;
				c++;
				break;
			}
		}
		if (c==0) cout<<-1<<endl;
	}
}
