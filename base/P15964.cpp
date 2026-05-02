#include<iostream>
using namespace std;
int main(){
	long long res=0;
	long long a=654321-789456;
	long long p=901234,q=500001;
	while(p!=0&&q!=0){
		if(a<=0){
			a+=876543;
			q--;
		}
		else{
			res+=q;
			a-=567890;
			p--;
		}
    }
	cout<<res;   					//192939070136
	
	return 0;
}
