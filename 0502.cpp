#include <bits/stdc++.h>

using namespace std;
struct ThiSinh{
	string name;
	string namsinh;
	float diem1;
	float diem2;
	float diem3;
	
};

void nhap(ThiSinh &x){
	getline (cin,x.name);
	cin>>x.namsinh;
	cin.ignore();
	cin>>x.diem1;
	cin>>x.diem2;
	cin>>x.diem3;
}
void in(ThiSinh x){
	cout<<x.name<<" "<<x.namsinh<<fixed<<setprecision(1)<<" "<<x.diem1+x.diem2+x.diem3;
}

int main(){
	struct ThiSinh A;
	nhap(A);
	in(A);
	return 0;
	
}
