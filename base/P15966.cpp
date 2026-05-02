#include<iostream>
using namespace std;
long long res=0;
long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp & 1) result = result * base % mod;
        base = base * base % mod;
        exp >>= 1;
    }
    return result;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		long long a,b,res=0;
		cin>>a>>b;
		if(a<=b) cout<<1<<endl;
		else{
			long long now=1,c=a-b-1;
			int flag=0;
			if(c==0) now=1;
			else{
				now=mod_pow(2, c, 998244353);
			}
			res=(now*(b+1))%998244353;
			cout<<res<<endl;
		}
	}
	return 0;
}
