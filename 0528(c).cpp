#include <bits/stdc++.h>


using namespace std;

struct sinhvien{
	
	string ma,name,ml,email,cty;
	int msv;
};

void nhap(sinhvien a[],int n){
	for (int i=0;i<n;i++){
//		cin>>a[i].ma;
		a[i].msv= i+1;
		cin.ignore();
		getline(cin,a[i].ma);
		getline(cin,a[i].name);
		cin>>a[i].ml>>a[i].email>>a[i].cty;
	}
}

void in(sinhvien a){
	cout<<a.msv<<" "<<a.ma<<" "<<a.name<<" "<<a.ml<<" "<<a.email<<" "<<a.cty;
}

bool cmp(sinhvien a,sinhvien b){
	return a.name<b.name;
}

bool cmpd(sinhvien a,string b){
	return a.cty==b;
}

void sapxep(sinhvien a[],int n){
	sort(a,a+n,cmp);
}

int main(){
	int n;cin>>n;
//	cin.ignore();
	struct sinhvien ds[1004];
	nhap(ds,n);
	sapxep(ds,n);
	int k;cin>>k;
	while(k--){
		string h;
		cin>>h;
		for (int i=0;i<n;i++){
			if (cmpd(ds[i],h)){
				in(ds[i]);
				cout<<endl;
			}
		}
	}
}