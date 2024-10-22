#include <iostream>
#include <cctype>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
			char bai;
		cin>>bai;
		if (bai>='a'){
			char c;
			c=toupper(bai);
			cout<<c<<endl;
		}
		else{
			char c;
			c=tolower(bai);
			cout<<c<<endl;
		}
	}
}
