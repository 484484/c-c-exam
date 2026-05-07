#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
	int k;
	cin>>k;
	string s;
	char c1,c2;
	cin>>s>>c1>>c2;
	int n=s.length();
	long long res=0;		//±¬int 
	vector<int> v;
	int a[500005]={0},l=0;
	for(int i=0;i<n;i++){
		if(s[i]==c1) 
		{
			v.push_back(i);
			l++;
		}
		if(s[n-i-1]==c2) a[n-i-1]=a[n-i]+1;
		else a[n-i-1]=a[n-i];
	}
	for(int i=0;i<l;i++){
		if(v[i]+k-1<=n){
			res+=a[v[i]+k-1];
		}
		else break;
	}
	cout<<res;
	return 0;
}
