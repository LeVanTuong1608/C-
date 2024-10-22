#include <bits/stdc++.h>
#define PI 3.141592653589793238


using namespace std;
double canh(int a,int b){
	double t;
	t=sqrt(a*a+b*b);
	return t;
}double tinhdientich(double a,double b,double c){
	double s=0;
	s=0.25*(sqrt((a+b+c)*(a+b-c)*(b+c-a)*(a+c-b)));
	return s;
}

int check(double a ,double b,double c){
	if ((a+b)>c &&(b+c)>a && (b+c)>a) return 1;
	return 0;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int ax,ay,bx,by,cx,cy;
		cin>>ax>>ay>>bx>>by>>cx>>cy;
		double a,b,c;
		a= canh(ax,ay);
		b=canh(bx,by);
		c=canh(cx,cy);
		if (check(a,b,c)==1){
			double dientich;
			dientich= tinhdientich(a,b,c);
			double r=(a*b*c)/(4*(dientich));
			printf("%.3lf\n",PI*r*r);
		}
		else cout<<"INVALID"<<endl;
	}
}
