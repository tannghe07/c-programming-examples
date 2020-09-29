#include<iostream> 
using namespace std;
int main(){
	int a[100000];
	long long n, t, l , r, q, i;
	cin>>t;
	while(t>0){
		cin>>n>>q;
		for(i=1;i<=n;i++) cin>>a[i];
		while(q--){
			cin>>l>>r;
			long long sum=0;
			for(i=l;i<=r;i++){
				sum+=a[i];
			}
			cout<<sum<<endl;
		}
		cout<<endl;
		t--;
	}
	return 0;
}

