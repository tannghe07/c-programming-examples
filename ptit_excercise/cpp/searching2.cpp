#include<iostream>
using namespace std;
int main(){
	int a[100000];
	long long t, n, x;
	cin>>t;
	while(t>0){
		cin>>n>>x;
		long long i, kt=0;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++){
			if(a[i]==x){
				kt=1;
				break;
			}
			else kt=-1;
		}
		cout<<kt<<endl;
		t--;
	}
	return 0;
}

