#include<iostream>
using namespace std;
int main(){
	long long t, a, m, x;
	cin>>t;
	while(t>0){
		int tmp=-1;
		cin>>a>>m;
		for(long long i=0;i<m;i++){
			if(a*i%m==1){
				tmp=i;
				break;
			}
		}
		cout<<tmp<<endl;
		t--;
	}
	return 0;
}

