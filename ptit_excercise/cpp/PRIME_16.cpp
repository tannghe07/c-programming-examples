#include<iostream>
#include<cmath>
using namespace std;
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	unsigned long long n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		int i, count=0;
		for(i=2;pow(i, 2)<=n;i++){
			if(snt(i)==1) count++;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}

