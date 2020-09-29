#include<iostream>
using namespace std;
int n;
int a[20];
int kt[20]={0};
void xuat(){
	for(int i=1;i<=n;i++) cout<<a[i];
	cout<<" ";
}
void hoanvi(int k){
	for(int i=1;i<=n;i++){
		if(!kt[i]){
			a[k]=i;
			kt[i]=1;
			if(k==n)
				xuat();
			else 
				hoanvi(k+1);
			kt[i]=0;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t>0){
		cin>>n;
		hoanvi(1);
		cout<<endl;
		t--;
	}
	return 0;
}
