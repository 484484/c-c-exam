#include<iostream>
#include<stack>
using namespace std;
int main(){
	int n;
	int n1[100005],n2[100005];
	cin>>n;
	for(int i=0;i<n;i++) cin>>n1[i];
	stack<int>st;
	for(int i=n-1;i>=0;i--){
		while(!st.empty()&&n1[st.top()-1]<=n1[i])
			st.pop();
		if(st.empty()) n2[i]=0;
		else n2[i]=st.top();
		st.push(i+1);
	}
	for(int i=0;i<n;i++) cout<<n2[i]<<endl;
	return 0;
}
