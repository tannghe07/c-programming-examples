#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n, i, sum=0;
		unsigned long long k;
		cin>>n>>k;
		for(i=1;i<=n;i++){
			sum+=(i%k);
		}
		if(k==sum) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}

