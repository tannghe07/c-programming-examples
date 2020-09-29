#include<iostream>
#include<math.h>
using namespace std;
long long snt(long long n){
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	long long n, i, t;
	cin>>t;
	while(t>0){
		cin>>n;
		for(i=2;i<=n;i++){
			if(snt(i)==1) cout<<i<<" ";
		}
		cout<<endl;
		t--;
	}
	return 0;
}

