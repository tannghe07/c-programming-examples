#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	int n, t;
	cin>>t;
	while(t>0){
		cin>>n;
		int i, j;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++) cin>>a[i][j];
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(i%2==0){
					cout<<a[i][j]<<" ";
				}
				else cout<<a[i][n-j-1]<<" ";
			}
		}
		cout<<endl;
		t--;
	}
	return 0;
}

