#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int t;cin>>t;
	while(t--){
		double x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		double khoangcach;
		khoangcach= sqrt(pow(abs(y2-y1),2)+pow(abs(x2-x1),2));
	//	cout<<fixed<<setprecision(4)<<khoangcach<<endl;
		printf("%.4lf\n",khoangcach);
	}
}
