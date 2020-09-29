#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
		int a[100000];
		int n, k, i, j;
		cin>>n>>k;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]) swap(a[i], a[j]);
			}
		}
		cout<<a[k-1]<<endl;
		t--;
	}
	return 0;
}

