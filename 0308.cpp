#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		char arr[100005]={0};
		for (int i=0;i<s.size();i++){
			arr[s[i]]++;
		}
		for (int i=0;i<s.size();i++){
			if (arr[s[i]]==1){
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}
