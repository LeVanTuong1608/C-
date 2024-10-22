#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while (t--){
		char arr[100006]={0};
		string s;
		cin>>s;
//		cin.ignore(1);
		int h;
		cin>>h;
		for (int i=0;i<s.size();i++){
			arr[s[i]-'a']++;
		}
		int dem=0;
		for (int i=0;i<26;i++){
			if (arr[i]==0){
//				 cout<<"0"<<endl;
				 dem++;
			}
		}
		if (dem==0|| dem<=h) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
}
