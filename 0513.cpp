#include <bits/stdc++.h>

using namespace std;

struct SinhVien{
	string MSV,name,MA,date;
	float diem;
};

void nhap(SinhVien a[],int n){
	for (int i=0;i<n;i++){
		a[i].MSV="B20DCCN";
		cin.ignore();
		getline(cin,a[i].name);
		cin>>a[i].MA>>a[i].date>>a[i].diem;
		
		if (a[i].date[1]=='/') a[i].date= "0"+a[i].date;
		if (a[i].date[4]=='/') a[i].date= a[i].date.insert(3,"0");
	}
}

void in(SinhVien a[],int n){
	for (int i=0;i<n;i++){
		if (((i+1)/10==0)) {
			cout<<a[i].MSV<<"00"<<i+1;
		}
		else cout<<a[i].MSV<<"0"<<i+1;
		
		cout<<" "<<a[i].name<<" "<<a[i].MA<<" "<<a[i].date<<" ";
		printf("%.2f",a[i].diem);
		cout<<endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
