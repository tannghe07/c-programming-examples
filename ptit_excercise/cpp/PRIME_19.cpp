#include<iostream>
using namespace std;
long long snt(long long n){
	if(n<2) return 0;
	for(long long i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long long a, b;
	cin>>a>>b;
	a<b;
	if(a>b){
		long long c=a;
		a=b;
		b=c;
	}
	for(long long i=a;i<=b;i++){
		if(snt(i)==1) cout<<i<<" ";
	}
	return 0;
}

