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
	int n, i, j;
	int a[100][100];
	int sum1=0, sum2=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j){
				if(nt(a[i][j])) sum1+=a[i][j];
			}
			else if(i==n-j-1&&n!=j){
				if(nt(a[i][j])) sum2+=a[i][j];
			}
		}
	}
	printf("%d", sum1+sum2);
	return 0;
}

