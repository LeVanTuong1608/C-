#include <bits/stdc++.h>


using namespace std;


class cty{
	public:
		string name,ten;
		int so;
	
	friend istream &operator>>(istream &input,cty &a){
		
		cin>>a.name;
		cin.ignore();
		getline(cin,a.ten);
		cin>>a.so;
		return input;
	}
	
	friend ostream &operator<<(ostream &output,cty a){
		cout<<a.name<<" "<<a.ten<<" "<<a.so;
		return output;
	}
};

bool cmp(cty a,cty b){
	if (a.so==b.so){
		return a.name<b.name;
	}
	return a.so > b.so;
}

void sapxep(cty a[],int n){
	sort(a,a+n,cmp);
}

int main(){
	cty ds[10005];
	int n;cin>>n;
	for (int i=0;i<n;i++){
		cin>>ds[i];
	}
	sapxep(ds,n);
	for (int i=0;i<n;i++){
		cout<<ds[i]<<endl;
	}
	return 0;
}