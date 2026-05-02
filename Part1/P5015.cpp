#include<iostream>
#include<string>
using namespace std;
int main(){
	string s;
	int res=0;
	while(cin>>s){
		res+=s.size();					//cin可以自动忽略空格 
	}
	cout<<res;
	return 0;
}
