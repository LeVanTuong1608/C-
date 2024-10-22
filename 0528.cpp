
#include <bits/stdc++.h>

using namespace std;

struct sinhvien{
	int ma;
	string name,msv,ml,email,doanhnghiep;
};
void nhap(sinhvien a[],int n){
	for (int i=0;i<n;i++){
		a[i].ma=i+1;
		cin>>a[i].msv;
		cin.ignore();
		getline(cin,a[i].name);
		cin>>a[i].ml>>a[i].email>>a[i].doanhnghiep;
	}
}

void xuat(sinhvien a){
	cout<<a.ma<<" "<<a.msv<<" "<<a.name<<" "<<a.ml<<" "<<a.email<<" "<<a.doanhnghiep<<endl;
}
void nhap2(sinhvien a[],int n){
	for (int i=0;i<n;i++){
		a[i].ma=i+1;
//		cin.ignore();
		getline(cin,a[i].msv);
		getline(cin,a[i].name);
		getline(cin,a[i].ml);
		getline(cin,a[i].email);
		getline(cin,a[i].doanhnghiep);
	}
}
//bool cmp(sinhvien a,string k){
////	if(a.doanhnghiep==k) return 1;
////	return 0;
//	return a.doanhnghiep==k;
//}
int main(){
	int n;cin>>n;
	struct sinhvien a[50];
	nhap2(a,n);
	int k;cin>>k;
	sort(a,a+n);
	for (int l=0;l<k;l++){
		string kk;
		cin>>kk;
		for(int i=0;i<n;i++){
			if (a[i].doanhnghiep==kk){
				xuat(a[i]);
			}
		}
	}
}
