#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	string name,MA,sex,date,diachi,number,namsinh;
	
};
void nhap( struct NhanVien &x){
	cin.ignore();
	getline(cin,x.name);
	cin>>x.sex>>x.date;
	cin.ignore();
	getline(cin,x.diachi);
	cin>>x.number>>x.namsinh;
	if (x.date[1]==='/') x.date= "0"+ x.date;
	if (x.date[4]=='/') x.date= x.date.insert(3,"0");
	if (x.namsinh[1]==='/') x.namsinh= "0"x.namsinh;
	if (x.namsinh[4]=='/') x.namsinh= x.namsinh.insert(3,"0");
}
void inds(struct NhanVien a[], int n){
	int k=00000;
	for (int i=1;i<=n;i++){
		cout<<k+i<<" ";
		cout<<a[i].name
	}
	
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}
