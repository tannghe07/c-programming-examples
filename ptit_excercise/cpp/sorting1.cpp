#include<iostream>
using namespace std;
int main(){
	int a[1000], b[1000], c[1000];
	int n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		int i, j, k=0, h=0;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]<a[j]) swap(a[i], a[j]);
			}
		}
		for(i=0;i<n;i++) b[i]=a[i];
		for(i=0;i<n;i++){
			for(j=i+1;j<n;j++){
				if(a[i]>a[j]) swap(a[i], a[j]);
			}
		}
		for(i=0;i<n;i++){
			if(i%2!=0){
				c[i]=a[k];
				k++;
			}
			else{
				c[i]=b[h];
				h++;
			}
		}
		for(i=0;i<n;i++) cout<<c[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}

