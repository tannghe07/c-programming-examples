#include<iostream>
#include<cmath>
using namespace std;
int main(){
	long long a[1000], b[1000], c[1000];
	long long n, t;
	cin>>t;
	while(t>0){
		long long i, j, count=0;
		cin>>n;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++) b[i]=-1;
		for(i=0;i<n;i++) c[i]=0;
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(a[j]==a[i]) c[j]=1;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[j]==i&&c[j]==0){
					b[i]=b[i]*(-a[j]);
				}
			}
		}
		for(i=0;i<n;i++) cout<<b[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}

