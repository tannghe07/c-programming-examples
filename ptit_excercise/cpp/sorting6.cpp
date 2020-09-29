#include<iostream>
using namespace std;
int main(){
	int a[100000];
	long long n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		long long i, j;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]) swap(a[i], a[j]);
			}
		}
		for(i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}

