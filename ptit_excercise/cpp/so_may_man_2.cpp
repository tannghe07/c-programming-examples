#include<iostream>
#include<string.h>
using namespace std;
int tong(int n){
	int sum=0;
	while(n){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int i, sum=0;
		char n[100];
		cin>>n;
		for(i=0;i<strlen(n);i++){
			sum+=((int)n[i]-48);
		}
		if(sum%9==0&&sum!=0) cout<<"1"<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}

