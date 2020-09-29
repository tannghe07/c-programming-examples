#include<iostream>
using namespace std;
long long a[1000000], b[1000000];
int main(){
	int t;
	cin>>t;
	while(t>0){
		int n, i, j, sum, k=0;
		cin>>n;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++){
			sum=0;
			for(j=i;j<n;j++){
				sum+=a[j];
				b[k]=sum;
				k++;
			}
		}
		int max=b[0];
		for(i=1;i<k;i++){
			if(b[i]>max) max=b[i];
		}
		cout<<max<<endl;
		t--;
	}
	return 0;
}

