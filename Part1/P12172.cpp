#include<iostream>
using namespace std;
int main(){
	int w,h,v;
	cin>>w>>h>>v;
	for(int i=0;i<h+w;i++){
		if(i<h){
			for(int q=0;q<w;q++)cout<<'Q';
		}
		else{
			for(int q=0;q<w+v;q++)cout<<'Q';
		}
		cout<<endl;
	}
	return 0;
}
