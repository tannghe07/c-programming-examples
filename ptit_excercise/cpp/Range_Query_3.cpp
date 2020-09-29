#include<iostream>
using namespace std;
int snt(int n){
	if(n<2) return 0;
	for(int i=2;i<n;i++){
		if(n%i==0) return 0;
	}
	return 1;
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		int l, r, i, count=0;
		cin>>l>>r;
		for(i=l;i<=r;i++){
			if(snt(i)==1) count++;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}

