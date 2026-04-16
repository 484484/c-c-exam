#include<iostream>
using namespace std;
int main(){
	int a,b,res=0,n;
	cin>>a>>b;
	n=a*10+b;
	while(n>19){
		n-=19;
		res++;
	}
	cout<<res;
	return 0;
}
