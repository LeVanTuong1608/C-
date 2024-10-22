#include <bits/stdc++.h>


using namespace std;

class cty{
	public:
	string ten,name;
	int so;
	
	friend istream &operator>>(istream &input,cty &a){
			cin>>a.ten;
		cin.ignore();
	
		getline(cin,a.name);
		cin>>a.so;
		return input;
	}
	
	friend ostream &operator<<(ostream &output,cty a){
		cout<<a.ten<<" "<<a.name<<" "<<a.so;
		return output;
	}
};

int check(int a,int b,cty c){
	if (c.so>=a&&c.so<=b) return 1;
	return 0;
}

bool cmp(cty a,cty b){
	if (a.so==b.so){
		return a.ten<b.ten;
	}
	return a.so>b.so;
}

void sapxep(cty a[],int n){
	sort(a,a+n,cmp);
}

int main(){
	int n;cin>>n;
	cty ds[10004];
	for (int i=0;i<n;i++){
		cin>>ds[i];
	}
	sapxep(ds,n);
	int t;cin>>t;
	while(t--){
		int a,b;cin>>a>>b;
		cout<<"DANH SACH DOANH NGHIEP NHAN TU "<<a<<" DEN "<<b<<" SINH VIEN:"<<endl;
		for (int i=0;i<n;i++){
			if(check(a,b,ds[i])){
				cout<<ds[i]<<endl;
			}
		}
	}
}