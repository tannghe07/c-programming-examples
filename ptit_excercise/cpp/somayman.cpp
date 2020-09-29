#include<iostream>
using namespace std;
int main(){
	long long n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		if(n%100==86) cout<<"1";
		else cout<<"0";
		cout<<endl;
		t--;
	}
	return 0;
}

