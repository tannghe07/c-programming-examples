#include<iostream>
using namespace std;
int main(){
	int a[100000];
	int n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		int i, j, count=0;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]) swap(a[i], a[j]);
			}
		}
		for(i=1;i<n;i++){
			if(a[i]-a[i-1]>1) count+=(a[i]-a[i-1]-1);
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}

