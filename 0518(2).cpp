#include <bits/stdc++.h>

using namespace std;
struct NhanVien{
	string name,birth,diachi,date,number,sex;
	int ma;
	string ng,th,nm;
	
	
};
int ii=0;
void nhap(NhanVien &x){
	ii++;
	x.ma=ii;
	cin.ignore();
	getline(cin,x.name);
	cin>>x.sex>>x.birth;
	cin.ignore();
	getline(cin,x.diachi);
	cin>>x.number>>x.date;
	if (x.birth[1]=='/') x.birth="0"+x.birth;
	if (x.birth[4]=='/') x.birth=x.birth.insert(3,"0");
	if (x.date[1]=='/') x.date="0"+x.date;
	if (x.date[4]=='/') x.date=x.date.insert(3,"0");
	x.ng+=x.birth[0];x.ng+=x.birth[1];
	x.th+=x.birth[3];x.th+=x.birth[4];
	x.nm+=x.birth[6];x.nm+=x.birth[7];x.nm+=x.birth[8];x.nm+=x.birth[9];
 }
bool cmp(NhanVien a,NhanVien b){
	if (a.nm==b.nm){
		if (a.ng==b.ng){
			return a.th<b.th;
		
		}
		return a.ng<b.ng;
	}
	return a.nm<b.nm;
}
void sapxep(NhanVien a[],int n){
		sort(a,a+n,cmp);
	
}
void inds(NhanVien a[],int n){
	for (int i=0;i<n;i++){
		cout<<setfill('0')<<setw(5)<<a[i].ma<<" ";
		cout<<a[i].name<<" "<<a[i].sex<<" "<<a[i].birth<<" ";
		cout<<a[i].diachi<<" "<<a[i].number<<" "<<a[i].date;
		if (i<n-1) cout<<endl;

	}

}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}
