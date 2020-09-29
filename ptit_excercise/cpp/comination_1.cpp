#include<iostream>
#include<cmath>
using namespace std;
void tao(int a[], int n){
	a[n-1]++;
	for(int i=n-1;i>0;i--){
		if(a[i]>1){
			a[i-1]++;
			a[i]-=2;
		}
	}
}
void xuat(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
	cout<<" ";
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		int a[20];
		int n, i;
		cin>>n;
		for(i=0;i<n;i++) a[i]=0;
		for(i=0;i<n;i++) cout<<a[i];
		cout<<" ";
		for(i=0;i<pow(2,n)-1;i++){
			tao(a, n);
			xuat(a, n);
		}
		cout<<endl;
		t--;
	}
	return 0;
}

