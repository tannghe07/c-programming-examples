#include<iostream>
using namespace std;
long long gcd(long long a, long long b){
	if(b==0) return a;
	return gcd(b, a%b);
}
int main(){
	long long t, n, a;
	do{
		cin>>t;
	}while(t<1||t>10000);
	for(int i=1;i<=t;i++){
		a=1;
		cin>>n;
		for(int i=1;i<=n;i++){
			a=a*i/gcd(a,i);
		}
		cout<<a<<endl;
	}
	return 0;
}

