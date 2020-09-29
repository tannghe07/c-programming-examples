#include<iostream>
using namespace std;
int main(){
	long long a[100000], b[100000], c[100000];
	int n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		int i, k=0, h=0;
		for(i=0;i<n;i++){
			cin>>a[i];
		}
		for(i=0;i<n;i++){
			if(a[i]!=0){
				b[k]=a[i];
				k++;
			}
			else{
				c[h]=a[i];
				h++;
			}
		}
		for(i=0;i<k;i++) cout<<b[i]<<" ";
		for(i=0;i<h;i++) cout<<c[i]<<" ";
		cout<<endl;
		t--;
	}
	return 0;
}

