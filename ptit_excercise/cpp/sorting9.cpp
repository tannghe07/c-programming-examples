#include<iostream>
using namespace std;
int main(){
	int a[100000];
	long long t, n, k;
	cin>>t;
	while(t>0){
		cin>>n>>k;
		long long i, j, count=0;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[i]+a[j]==k) count++;
			}
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}

