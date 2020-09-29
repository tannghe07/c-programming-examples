#include<iostream>
using namespace std;
int main(){
	long long t, n, x;
	long long a[100000];
	cin>>t;
	while(t>0){
		long long i, count=0, temp;
		cin>>n>>x;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++){
			if(a[i]==x){
				count++;
				temp=i+1;
				break;
			}
		}
		if(count!=0) cout<<temp;
		else cout<<"-1";
		cout<<endl;
		t--;
	}
	return 0;
}

