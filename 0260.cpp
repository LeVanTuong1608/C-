#include <bits/stdc++.h>


using namespace std;

int main(){
		int t;cin>>t;
		int b[t][t],a[t*t+t],k=0;
		for (int i=0;i<t;i++){
			for (int j=0;j<t;j++){
				cin>>b[i][j];
				a[k++]=b[i][j];
			}
		}
		sort(a,a+k);
		k=0;
		int h1=0,h2=t-1,c1=0,c2=t-1;
		while(c1<=c2&&h1<=h2){
			for (int i=c1;i<=c2;i++){
				b[h1][i]=a[k];
				k++;
			}
			h1++;
			for (int i=h1;i<=h2;i++){
				b[i][c2]=a[k];
				k++;
			}
			c2--;
			if(h1<=h2){
				for (int i=c2;i>=c1;i--){
					b[h2][i]=a[k];
					k++;
				}
				h2--;
			}
			if(c1<=c2){
				for (int i=h2;i>=h1;i--){
					b[i][c1]=a[k];
					k++;
				}
				c1++;
			}
			
		}
		for (int i=0;i<t;i++){
			for (int j=0;j<t;j++){
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
//		cout<<endl;
	
}