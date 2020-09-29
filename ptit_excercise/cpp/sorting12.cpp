#include<iostream>
using namespace std;
long long maxmax(long long n, int a[100000]){
	long long max=0, i;
	for(i=0;i<n;i++){
		if(a[i]>max) max=a[i];
	}
	return max;
}
long long minmin(long long n, int a[100000]){
	long long min=999999, i;
	for(i=0;i<n;i++){
		if(a[i]<min) min=a[i];
	}
	return min;
}
int main(){
	int a[100000], b[100000];
	long long n, m, t;
	cin>>t;
	while(t>0){
		cin>>n>>m;
		long long i;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<m;i++) cin>>b[i];
		cout<<maxmax(n, a)*minmin(m, b)<<endl;
		t--;
	}
	return 0;
}

