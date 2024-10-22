#include <bits/stdc++.h>

using namespace std;

struct sinhvien{
	int ma;
	string msv,name,ml,email,doanhnghiep;
};
struct cty{
	string name;
};

bool cmp(sinhvien a,sinhvien b){
	return a.name<b.name;
}
void sapxep(sinhvien a[],int n){
	sort(a,a+n,cmp);
}
void xuat(sinhvien a){
	cout<<a.ma<<" "<<a.msv<<" "<<a.name<<" "<<a.ml<<" "<<a.email<<a.doanhnghiep<<endl;
		
}
int sosanh(sinhvien a,cty b){
	if (	 a.doanhnghiep==b.name) return 1;
	return 0;
}
int Sosanh(sinhvien a,string b){
	if (a.doanhnghiep==b) return 1;
	return 0;
}
void nhap2(sinhvien a[],int n){
	for (int i=0;i<n;i++){
		a[i].ma=i+1;
//		cin>>a[i].msv;
		cin.ignore();
		getline(cin,a[i].msv);
		getline(cin,a[i].name);
		getline(cin,a[i].ml);
		getline(cin,a[i].email);
		getline(cin,a[i].doanhnghiep);
//		cin>>a[i].ml>>a[i].email>>a[i].doanhnghiep;
	}
}
void nhap3(sinhvien a[],int n){
	for (int i=0;i<n;i++){
		a[i].ma=i+1;
		cin>>a[i].msv;
		cin.ignore();
		getline(cin,a[i].name);
		cin>>a[i].ml>>a[i].email>>a[i].doanhnghiep;
	}
}
void xuat2(sinhvien a[],cty b[],int n,int k){
	for (int j=0;j<k;j++){
		for (int i=0;i<n;i++){
			
			if (sosanh(a[i],b[j])==1){
				cout<<a[i].ma<<" "<<a[i].msv<<" "<<a[i].name<<" "<<a[i].ml<<" "<<a[i].email<<" "<<a[i].doanhnghiep<<endl;
			}
		}
	}
}
void in(sinhvien a){
	cout<<a.ma<<" "<<a.msv<<" "<<a.name<<" "<<a.ml<<" "<<a.email<<" "<<a.doanhnghiep;
}

void xuat4(sinhvien a[],int n,string x){
	for (int i=0;i<n;i++){
		if (Sosanh (a[i],x)==1) {
			cout<<a[i].ma<<" "<<a[i].msv<<" "<<a[i].name<<" "<<a[i].ml<<" "<<a[i].email<<" "<<a[i].doanhnghiep<<endl;
		}
	}
}

int main(){

	int n;cin>>n;
	struct sinhvien a[50];
	nhap3(a,n);
	//nhap2(a,n);
	int k;cin>>k;
//	struct cty b[k];
//	for (int i=0;i<k;i++){
//		cin>>b[k].name;
//		cin.ignore();
//		getline(cin,b[k].name);
//	}
//	xuat(a[3]);
	sapxep(a,n);
	
	string x="";
	for (int i=0;i<k;i++){
		cin>>x;
		xuat4(a,n,x);
	}
	
//	for (int i=0;i<k;i++){
//		for (int j=0;j<n;j++){
//			if (sosanh(a[i],b[j])==1) {
//				in(a[i]);
//				cout<<endl;
//			}
//		}
//	}
//	xuat2(a,b,n,k);
}
