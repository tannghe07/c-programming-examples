#include<iostream>
using namespace std;
int main(){
	long long n, t, k, tmp, count;
	cin>>t;
	while(t>0){
		count=0;
		cin>>n>>k;
		if(n==1) tmp=-1;
		for(long long i=2;i<=n;i++){
			while(n%i==0){
				count++;
				if(count==k){
					tmp=i;
					break;
				}
				else if(count<k) tmp=-1;
				n/=i;
			}
		}
		cout<<tmp;
		cout<<endl;
		t--;
	}
	return 0;
}
