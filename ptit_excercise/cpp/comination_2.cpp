#include<iostream>
#include<cmath>
using namespace std;
void chinhhop(int n, int k, int a[], int i, int b[]){
	int j;
	for(j=1;j<=n;j++){
		if(b[j]==1){
			a[i]=j;
			b[j]=0;
			if(i==n-1){
				int h;
				for(h=0;h<k;h++) cout<<a[h];
				cout<<" ";
			}
			else chinhhop(n, k, a, i+1, b);
			b[j]=1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		int a[100];
		int b[100];
		int n, k, i;
		cin>>n>>k;
		for(i=0;i<n;i++) b[i]=1;
		chinhhop(n, k, a, 0, b);
		cout<<endl;
		t--;
	}
	return 0;
}

