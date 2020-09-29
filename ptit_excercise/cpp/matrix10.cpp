#include<iostream>
using namespace std;
int main(){
	int a[100][100];
	int b[100];
	int d[100];
	int n, m, t;
	cin>>t;
	while(t>0){
		cin>>n>>m;
		int i, j, h, c;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++) cin>>a[i][j];
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i][j]==1){
					b[i]=i;
				}
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				a[b[i]][j]=1;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<m;j++) cout<<a[i][j]<<" ";
			cout<<endl;
		}
		t--;
	}
	return 0;
}

