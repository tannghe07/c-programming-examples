#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		int i, j, h=0;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[i]<a[j]) swap(a[i], a[j]);
			}
		}
		cout<<a[0]<<endl;
		t--;
	}
	return 0;
}

