#include<iostream>
#include<queue>
using namespace std;
int main(){
	int n,m;
	int l[1005]={0};
	cin>>n>>m;
	int res=0;
	queue<int>que;
	for(int i=0;i<m;i++){
		int a;
		cin>>a;
		if(l[a]==0){
			res++;
			if(que.size()<n){
				que.push(a);
				l[a]=1;
			}
			else{
				l[que.front()]=0; 
				que.pop();
				que.push(a);
				l[a]=1;
			}
		}
	}
	cout<<res;
	return 0;
}
