#include<iostream>
using namespace std;
long long tong(long long n){
	long long a=0;
	while(n){
		a+=n%10;
		n/=10;
	}
	return a;
}
int main(){
	long long n, t, a;
	cin>>t;
	while(t>0){
		cin>>n;
		a=tong(n);
		while(a>=10){
			a=tong(a);
		}
		cout<<a<<endl;
		t--;
		
	}
	return 0;
}

