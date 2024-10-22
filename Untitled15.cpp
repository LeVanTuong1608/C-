#include <iostream>
#include <string.h>
#include <bits/stdc++.h>


using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore(1);
	while(t--){
		string s;
		cin>>s;
		int le=0,chan=0;
		for (int i=0;i<s.size();i++ ){
			if (i%2==0) chan+=(s[i]-'0');
			else le+=(s[i]-'0');
		
		}int h;
		if (chan>=le){
			h=chan-le;
		}
		else h=le-chan;
		if (h%11==0) cout<<"1"<<endl;
		if(h%11!=0) cout<<"0"<<endl;
		
	}	
}
