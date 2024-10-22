#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--){
		string s;
		getline(cin,s);
		int dem=0,ramm=0;
		int ar[10]={0};
		for (int i=0;i<s.size();i++){
			if (s[i]>='0' && s[i]<='9'){
			
					ar[s[i]-'0']++;
			}
			else {
				ramm++;
				break;
			}
		}
		for(int i=0;i<10;i++){
			if (ar[i]==0){
				dem++;
				break;
			}
		}
		if (s[0]-'0'==0) cout<<"INVALID"<<endl;
		 else if (ramm==0){
			if (dem==0) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"INVALID"<<endl;
	}
}
