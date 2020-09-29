#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int a[100000], b[100000];
	long long n, t;
	cin>>t;
	while(t>0){
		long long i, j, k=0;
		cin>>n;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				b[k]=abs(a[j]-a[i]);
				k++;
			}
		}
		long long min=999999;
		for(i=0;i<k;i++){
			if(b[i]<min) min=b[i];
		}
		cout<<min<<endl;
		t--;
	}
	return 0;
}

