#include<iostream>
using namespace std;
int main(){
	int a,b,v,res=0;
	cin>>a>>b>>v;
	if((v-a)%(a-b)!=0) res=(v-a)/(a-b)+2;
	else res=(v-a)/(a-b)+1;
	cout<<res;
	return 0;
}
