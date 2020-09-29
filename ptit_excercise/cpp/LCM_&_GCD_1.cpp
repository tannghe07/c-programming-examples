#include<iostream>
#include<math.h>
using namespace std;
int lcm(int a, int b){
	a<b;
	if(a>b) swap(a, b);
	for(int i=a;i>=1;i--){
		if(a%i==0&&b%i==0){
			return i;
			break;
		}
	}
}
int main(){
	long long t, gcd, a, b;
	do{
		cin>>t;
	}while(t<1||t>100);
	for(int i=1;i<=t;i++){
		do{
			cin>>a>>b;
		}while(1>a||b>100000000);
		cout<<a*b/lcm(a,b)<<" "<<lcm(a,b)<<endl;
	}
	return 0;
}

