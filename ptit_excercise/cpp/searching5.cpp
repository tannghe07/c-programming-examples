#include<iostream>
using namespace std;
long long min(int a[100000], long long n){
	long long minmin=999999;
	for(long long i=0;i<n;i++){
		if(a[i]<minmin) minmin=a[i];
	}
	return minmin;
}
int main(){
	int a[100000];
	long long n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		long long min2, i;
		for(i=0;i<n;i++) cin>>a[i];
		min2=999999;
		for(i=0;i<n;i++){
			if(a[i]!=min(a, n)){
				if(a[i]<min2) min2=a[i];
			}
		}
		if(min2!=999999) cout<<min(a, n)<<" "<<min2<<endl;
		else cout<<"-1"<<endl;
		t--;
	}
	return 0;
}

