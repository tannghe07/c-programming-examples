#include<iostream>
using namespace std;
int main(){
	long long n, t, count;
	cin>>t;
	while(t>0){
		cin>>n;
		for(long long i=2;i<=n;i++){
			count=0;
			while(n%i==0){
				count++;
				n/=i;
			}
			if(count!=0) cout<<i<<" "<<count<<" ";
		}
		cout<<endl;
		t--;
	}
	return 0;
}

