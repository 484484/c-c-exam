#include<iostream>
using namespace std;
int main(){
	long long y,w;
	char x,z;
	cin>>x>>y>>z>>w;
	if(x>='a'&&z<='z'&&x==z){
		cout<<"valid"<<endl;
		if(w>=y) cout<<w-y+1;
		else cout<<y-w+1;
	}
	else{
		cout<<"Invalid"<<endl;
		cout<<-1;
	}
	return 0;
}
