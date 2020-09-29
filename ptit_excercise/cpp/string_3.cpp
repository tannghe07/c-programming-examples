#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		char a[1000];
		int n, i;
		cin>>a;
		n=strlen(a);
		if(a[n-1]=='0'||a[n-1]==5) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	return 0;
}

