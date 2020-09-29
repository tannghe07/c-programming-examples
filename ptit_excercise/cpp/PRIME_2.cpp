#include<iostream>
#include<math.h>
using namespace std;
int main(){
	long long n, t, i, x;
	cin>>t;
	while(t>0){
		cin>>n;
		for(i=2;i<=sqrt(n);i++){
			while(n%i==0){
				n/=i;
				x=i;
			}
		}
		if(n!=1) x=n;
		cout<<x<<endl;
		t--;
	}
	return 0;
}

