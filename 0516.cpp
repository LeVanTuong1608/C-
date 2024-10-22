#include <bits/stdc++.h>

using namespace std;


struct Mathang{
	string name,loai;
	float ban,mua,loinhuan;
	int ma;
};

void nhap(Mathang a[],int n){
	for (int i=0;i<n;i++){
		a[i].ma=i+1;
		cin.ignore();
		getline(cin,a[i].name);
//		cin.ignore();
		getline(cin,a[i].loai);
		cin>>a[i].mua>>a[i].ban;
//		a[i].loinhuan= a[i].ban - a[i].mua;
		
	}	
	
}

bool cmp(Mathang a,Mathang b){
	return (a.ban - a.mua) > (b.ban - b.mua);
}

void sapxep(Mathang a[],int n){
	sort(a,a+n,cmp);
}

void xuat(Mathang a[],int n){
	for (int i=0;i<n;i++){
		cout<<a[i].ma<<" "<<a[i].name<<" "<<a[i].loai<<" ";
		printf("%.2lf",a[i].ban-a[i].mua);
//		cout<<a[i].mua<<" "<<a[i].ban<<endl;
//if (i<n-1) 
		cout<<endl;
	}
}

int main(){
	
	struct Mathang ds[50];
	int n;cin>>n;
	nhap(ds,n);
	sapxep(ds,n);
	xuat(ds,n);
	return 0;
}
