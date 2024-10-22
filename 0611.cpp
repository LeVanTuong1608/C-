#include <bits/stdc++.h>

using namespace std;

class SinhVien{
	private :
		int msv;
		string sv,name,ml,birth;
		float d1;
		
	public :
//		friend void nhap(SinhVien&);
//		friend void in(SinhVien);
		void nhap(){
			cin>>msv;
			cin.ignore();
			getline(cin,name);
			getline(cin,ml);
			getline(cin,birth);
			cin>>d1;
		}
//		cout<<
	
};
//
//void nhap(SinhVien &x){
//	cin>>x.msv;
//	cin.ignore();
//	getline(cin,x.name);
//	getline(cin,x.ml);
//	getline(cin,x.birth);
//	if (x.birth[1]=='/') x.birth="0"+x.birth;
//	if (x.birth[4]=='/') x.birth=x.birth.insert(3,"0");
//	cin>>x.d1;
//}
//
//
//void in(SinhVien x){
//	cout<<"B20DCCN";
//	cout <<setfill(0)<<sewt(3)<<x.msv<<" "<<x.name<<" "<<x.birth<<" ";
//	printf ("%.2f\n",x.d1);
//}


int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}
