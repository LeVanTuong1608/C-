#include <bits/stdc++.h>

using namespace std;

int check(char a[],char b[]){
	int diem=0;
	for (int i=0;i<15;i++){
//		if (fstrcmp(a[i],b[i])=0) diem++;
		if (a[i]==b[i]) diem++;
	}
	return diem*0.6666666666666667;
}

int main(){
//	int t;cin>>t;
//	while(t--){
		int n;cin>>n;
		char a[n][15];
		int b[n];
		double diem=0;
		char x[15]={'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
		char y[15]={'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
		
		for (int i=0;i<n;i++){
			cin>>b[i];
			for(int j=0;j<15;j++){
				cin>>a[i][j];
			}
		}
		double kq[n];
		for (int i=0;i<n;i++){
			if (b[i]==101){
				kq[i]=check(a[i],x);
			}
			else kq[i]=check(a[i],y);
		}
		for (int i=0;i<n;i++){
			printf("%.2lf\n",kq[i]);
		}
//		if (n==101) diem = check(a,x);
//		else diem= check(a,y);
//		printf("%.2lf\n",diem);
//	}
}
