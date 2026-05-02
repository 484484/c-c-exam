#include<iostream>
using namespace std;
double e=1e-6;
int n;
double a[15];
double f(double p){
	double res=0;
	for(int i=0;i<=n;i++){
		res=res*p+a[i];
	}
	return res;
}
int main(){
	cin>>n;
	double l,r;
	cin>>l>>r;
	for(int i=0;i<=n;i++){
		cin>>a[i];
	}
	while(r-l>e){
		double k=(r-l)/3.0;
		double mid1=l+k,mid2=r-k;
		if(f(mid1)>f(mid2)) r=mid2;
		else l=mid1;
	}
	printf("%.5f",l);
	return 0;
}
