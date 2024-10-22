#include <bits/stdc++.h>

using namespace std;

struct thoigian{
	
	int gio,phut,giay;
};

void nhap(thoigian a[],int n){
	for (int i=0;i<n;i++){
		cin>>a[i].gio>>a[i].phut>>a[i].giay;
	}
}
bool cmp(thoigian a,thoigian b){
	if (a.gio==b.gio){
		if(a.phut==b.phut){
			return a.giay<b.giay;
		}
		return a.phut<b.phut;
	}
	return a.gio<b.gio;
}
void sapxep(thoigian a[],int n)
{
	sort(a,a+n,cmp);
}

void xuat(thoigian a[],int n){
	for (int i=0;i<n;i++){
		
		cout<<a[i].gio<<" "<<a[i].phut<<" "<<a[i].giay<<endl;
	}
}

int main(){
	int n;cin>>n;
	struct thoigian ds[5005];
	nhap(ds,n);
	sapxep(ds,n);
	xuat(ds,n);
	return 0;
}
