#include<iostream>
using namespace std;
int main(){
	int a[1000];
	int n, t, x;
	cin>>t;
	while(t>0){
		cin>>n>>x;
		int count=0, i;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<n;i++){
			if(a[i]==x) count++;
		}
		if(count==0) cout<<"-1";
		else cout<<count;
		cout<<endl;
		t--;
	}
	return 0;
}

