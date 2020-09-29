#include<iostream>
#include<cmath>
using namespace std;
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int x, t;
	cin>>t;
	while(t>0){
		cin>>x;
		int i, count=0;
		for(i=2;i<x;i++){
			if(snt(i)==1) count++;
		}
		if(count>0) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}

