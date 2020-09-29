#include<iostream>
using namespace std;
int main(){
	int n, m, t;
	cin>>t;
	while(t>0){
		int i, a, b, count=0;
		cin>>n>>m>>a>>b;
		for(i=n;i<=m;i++){
			if(i%a==0||i%b==0) count++;
		}
		cout<<count<<endl;
		t--;
	}
	return 0;
}

