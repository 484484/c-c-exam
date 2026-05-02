
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n,x,m=1,ans=0;
    scanf("%d%d",&n,&x);
    while(m<=n){
        int a=n/(m*10),b=n/m%10,c=n%m; //a,b,c为n的三部分，求哪一位x的个数，b就为那一位数，a为b左边的数，c为b右边的数，如求1~728中十位7的个数，则a=7，b=2，c=8
        if(x){
            if(b>x) ans+=(a+1)*m;
            if(b==x) ans+=a*m+c+1; 
            if(b<x) ans+=a*m; 
        }
        else{ 
            if(b) ans+=a*m;
            else ans+=(a-1)*m+c+1;
        }
        m*=10;
    }
    printf("%d\n",ans);
    return 0;
}


