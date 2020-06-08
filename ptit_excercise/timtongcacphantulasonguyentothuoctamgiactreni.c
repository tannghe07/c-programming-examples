#include<stdio.h>
#include<stdbool.h>
bool nt(int n){
	int i;
	if(n<2) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int a[100][100];
	int n, i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	int sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i<=j){
				if(nt(a[i][j])){
					sum+=a[i][j];
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}

