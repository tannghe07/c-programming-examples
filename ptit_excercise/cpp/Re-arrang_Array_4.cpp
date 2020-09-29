#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		int i;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=1;i<n;i++){
			if(i%2==0){
				if(a[i]<a[i-1]) swap(a[i], a[i-1]);
			}
			else{
				if(a[i]>a[i-1]) swap(a[i], a[i-1]);
			}
		}
		for(i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}

