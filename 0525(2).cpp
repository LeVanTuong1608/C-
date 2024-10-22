#include <bits/stdc++.h>

using namespace std;
struct SinhVien{
	string msv,name,ml;
	float d1,d2,d3;
};

void nhap(SinhVien a[],int n){
	for (int i=0;i<n;i++){
		cin.ignore();
//		cin>>a[i].msv;

		getline(cin,a[i].msv);
		getline(cin,a[i].name);
		getline(cin,a[i].ml);
		cin>>a[i].ml;
		cin>>a[i].d1>>a[i].d2>>a[i].d3;
		
	}
}

void in_ds(SinhVien a[],int n){
	for (int i=0;i<n;i++){
		cout<<i+1<<" "<<a[i].msv<<" "<<a[i].name<<" "<<a[i].ml<<" ";
		printf("%.1f %.1f %.1f\n",a[i].d1,a[i].d2,a[i].d3);
//		if (i<n-1) cout<<endl;
	}
}
bool cmp(SinhVien a,SinhVien b){
	return a.name < b.name;
}
void sap_xep(SinhVien a[],int n ){
	sort(a,a+n,cmp);
}

int main(){
	int n;cin>>n;
	struct SinhVien ds[50];
	nhap(ds,n);
	sap_xep(ds,n);
	in_ds(ds,n);
	return 0;
	
	
}
