#include<iostream>
using namespace std;
int main(){
	int n,m;
	int a[105][105];
	cin>>n>>m;
	for(int p=0;p<n;p++){
		for(int q=0;q<m;q++){
			cin>>a[p][q];
		}
	}
	for(int p=0;p<m;p++){
		for(int q=0;q<n;q++){
			cout<<a[q][p]<<' ';
		}
		if(p<m-1)cout<<endl;
	}
	return 0;
}
