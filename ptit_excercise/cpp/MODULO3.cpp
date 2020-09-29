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
		cout<<sum<<endl;
	}
	return 0;
}

