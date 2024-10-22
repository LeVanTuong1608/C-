#include <bits/stdc++.h>

using namespace std;

struct NhanVien{
	string name,sex,date,diachi,thue,ngayky;
};

void nhap(struct NhanVien &x){
	cin.ignore();
	getline(cin,x.name);
	cin>>x.sex>>x.date;
	cin.ignore();
	getline(cin,x.diachi);
	cin>>x.thue>>x.ngayky;
}

void inds(struct NhanVien a[],int n){
	for (int i=0;i<n;i++){
		int k=i+1,s=0;
		while(k!=0){
			s++;
			k/=10;
		}
		if (s==1) cout<<"0000";
		else cout<<"000";
		cout<<i+1<<" "<<a[i].name<<" "<<a[i].sex<<" "<<a[i].date<<" "<<a[i].diachi<<" "<<a[i].thue<<" "<<a[i].ngayky<<endl;
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
