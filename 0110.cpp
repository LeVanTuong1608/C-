#include <bits/stdc++.h>
#include <string>

using namespace std;

int main(){
	int t;cin>>t;
	while(t--){
		string a;
		cin>>a;
		int d=0;
		int k;
//		k=strlen(a);
		k=a.size();
		for (int i=0;i<k-2;i++){
			if (a[i]-'0'==0&&a[i+1]-'0'==8&&a[i+2]-'0'==4){
				d=i;
				break;
			}
		}
		a.erase(a.begin()+d,a.begin()+d+3);
		cout<<a<<endl;
	}
}
