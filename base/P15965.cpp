#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int a[1005],flag=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i>0&&a[i-1]-a[i]>x&&flag==0) 
			{
				cout<<"Lose"<<endl;
				flag=1;
			}
			if(i>0&&a[i]-a[i-1]>1&&flag==0){
				cout<<"Lose"<<endl;
				flag=1;
			}
		}
		if(flag==0) cout<<"Win"<<endl;
	}
	return 0;
}
