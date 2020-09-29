#include<iostream>
#include<cmath>
using namespace std;
long long snt(int n){
	if(n<2) return 0;
	for(long long i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		for(long long i=2;pow(i, 2)<=n;i++){
			if(snt(i)==1) cout<<pow(i, 2)<<" ";
		}
		cout<<endl;
		t--;
	}
	return 0;
}

