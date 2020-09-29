#include<iostream>
using namespace std;
int main(){
	int a[10000], b[10000];
	int n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		int i, j, k=0;
		for(i=0;i<n;i++) cin>>a[i];
		int temp=-1;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[j]==a[i]){
					b[k]=a[j];
					k++;
				}
			}
		}
		for(i=0;i<k;i++) cout<<b[i]<<" ";
		t--;
	}
	return 0;
}

