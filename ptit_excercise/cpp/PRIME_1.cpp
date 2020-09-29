#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n, t, i;
	cin>>t;
	while(t>0){
		cin>>n;
		for(i=2;i<=sqrt(n);i++){
			while(n%i==0){
				cout<<i<<" ";
				n/=i;
			}
		}
		if(n!=1) cout<<n;
		cout<<endl;
		t--;
	}
	return 0;
}

