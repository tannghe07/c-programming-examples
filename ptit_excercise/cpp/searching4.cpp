#include<iostream>
using namespace std;
int main(){
	int a[100000];
	long long n, t, x;
	cin>>t;
	while(t>0){
		cin>>n>>x;
		long long i, tmp=0;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++){
			if(a[i]==x){
				tmp=i+1;
				break;
			}
		}
		cout<<tmp<<endl;
		t--;
	}
	return 0;
}

