#include<iostream>
using namespace std;
int main(){
	int n,m,k,a[1005][1005],res[1005]={0};
	cin>>n>>m>>k;
	for(int p=1;p<=n;p++){
		for(int q=1;q<=m;q++){
			cin>>a[p][q];	
		}
	}
	for(int p=1;p<=m;p++){
		int b[1005]={0};
		for(int q=1;q<=n;q++){
			b[a[q][p]]=1;			
		}
		for(int i=0;i<=k;i++){
			if(b[i]==1) res[i]+=1;
		}
	}
	for(int i=1;i<k;i++) printf("%d ",res[i]);
	printf("%d",res[k]);
	return 0;
}
