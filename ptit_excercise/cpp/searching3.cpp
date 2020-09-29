#include<iostream>
using namespace std;
int main(){
	int a[100000];
	long long n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		long long i, tmp=0;
		for(i=0;i<n-1;i++) cin>>a[i];
		for(i=0;i<n-1;i++){
			if(a[i+1]-a[i]>1){
				tmp=a[i]+1;
				break;
			}
		}
		cout<<tmp<<endl;
		t--;
		
	}
	return 0;
}

