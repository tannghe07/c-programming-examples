#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a[100000];
	int n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		int i, j, min, rmin;
		for(i=0;i<n;i++) cin>>a[i];
		min=999999;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(abs(a[i]+a[j])<min){
					min=abs(a[i]+a[j]);
					rmin=a[i]+a[j];
				}
			}
		}
		cout<<rmin<<endl;
		t--;
	}
	return 0;
}

