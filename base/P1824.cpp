#include<iostream>
#include<algorithm>
using namespace std;
int l[100005];
int n,m;
int check(int p){
	int now=l[0],a=1;
	for(int i=1;i<n;i++){
		if(l[i]-now>=p){
			now=l[i];
			a++;
		}
	}
	return a;
}
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>l[i];
	sort(l,l+n);
	int left=0,right=(l[n-1]-l[0]);
	int res=0;
	while(left<right){
		int mid=(right-left)/2+left;
		int a=check(mid);
		if(a>=m){
			res=mid;
			left=mid+1;
		}
		else{
			right=mid;
		}
	}
	cout<<res;
	return 0;
}
