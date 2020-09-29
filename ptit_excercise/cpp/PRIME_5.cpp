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
	int n, m, t;
	cin>>t;
	while(t>0){
		cin>>m>>n;
		int i;
		for(i=m;i<=n;i++){
			if(snt(i)==1) cout<<i<<" ";
		}
		cout<<endl;
		t--;
	}
	return 0;
}

