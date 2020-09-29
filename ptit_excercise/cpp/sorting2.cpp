#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t>0){
		int a[100000];
		int n, x, i, j;
		cin>>n>>x;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(abs(x-a[i])>abs(x-a[j])) swap(a[i], a[j]);
			}
		}
		for(i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}

