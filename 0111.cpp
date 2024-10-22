	#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--){
		string s;
		cin>>s;
		int dem=0;
		for (int i=0;i<s.size()-1;i++){
			if((s[i]+1!=s[i+1]) && (s[i]-1!=s[i+1])){
				dem++;
				break;
			}
		}
		if (dem==0) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
