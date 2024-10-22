#include <bits/stdc++.h>

#include<stdio.h>
#include<stdlib.h>

using namespace std;


struct Nguoi{
	string name;
	string birth,ng,th,nm;
	
};

void nhap(Nguoi a[],int n){
	
	for (int i=0;i<n;i++){
		cin>>a[i].name;
		cin>>a[i].birth;
		if (a[i].birth[1]=='/') a[i].birth="0"+a[i].birth;
		if (a[i].birth[4]=='/') a[i].birth=a[i].birth.insert(3,"0");
		a[i].ng+=a[i].birth[0];a[i].ng+=a[i].birth[1];
		a[i].th+=a[i].birth[3];a[i].th+=a[i].birth[4];
		a[i].nm+=a[i].birth[6];a[i].nm+=a[i].birth[7];a[i].nm+=a[i].birth[8];a[i].nm+=a[i].birth[9];
	}
}
bool cmp(Nguoi a,Nguoi b){
	if (a.nm==b.nm){
		if (a.th==b.th){
			return a.ng<b.ng;
		
		}
		return a.th<b.th;
	}
	return a.nm<b.nm;
}
void sapxep(Nguoi a[],int n){
		sort(a,a+n,cmp);
	
}

void xuat(Nguoi a[],int n){
	cout<<a[n-1].name<<endl;
//	for (int i=0;i<n-1;i++){
//		if (strcmp(a[i].birth,a[n-1].birth)=0) cout<<a[i].name<<" ";
//	}
	cout<<a[0].name<<endl;
//	for (int i=0;i<n-1;i++){
//	
//		if (cmp(a[i].birth,a[0].birth)=0) cout<<a[i].name<<" ";
//	}
}


int main(){
	int n;cin>>n;
	struct Nguoi ds[50];
	nhap(ds,n);
	sapxep(ds,n);
	xuat(ds,n);
	return 0;
}
