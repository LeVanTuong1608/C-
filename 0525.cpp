#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string msv,name,ml;
	double d1,d2,d3;
};

void nhap(SinhVien& x ){
	cin>>x.msv;
	cin.ignore();
	getline(cin,x.name);
	cin>>x.ml;
	cin>>x.d1>>x.d2>>x.d3;
//	x.dtb=(x.d1+x.d2+x.d3)/3;
}

void in_ds(SinhVien a[],int n){
	for (int i=0;i<n;i++){
		cout<<i+1<<" "<<a[i].msv<<" "<<a[i].name<<" "<<a[i].ml<<" ";
		printf("%.1llf %.1llf %.1llf\n",a[i].d1,a[i].d2,a[i].d3);
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
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}
