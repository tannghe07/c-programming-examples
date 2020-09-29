#include<iostream>
using namespace std;
int main(){
	int a[1000], b[1000], c[2000];
	long long n, m, t;
	cin>>t;
	while(t>0){
		cin>>n>>m;
		int i, j, k=0, h=0;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<m;i++) cin>>b[i];
		for(i=0;i<m+n;i++){
			if(i<n){
				c[i]=a[k];
				k++;
			}
			else{
				c[i]=b[h];
				h++;
			}
		}
		for(i=0;i<m+n-1;i++){
			for(j=i+1;j<m+n;j++){
				if(c[j]<c[i]) swap(c[i], c[j]);
			}
		}
		for(i=0;i<m+n;i++) cout<<c[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}

