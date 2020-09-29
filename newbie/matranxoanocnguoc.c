#include<stdio.h>
int main(){
	int a[100][100];
	int n, i, j;
	scanf("%d", &n);
	int ht=0, hd=n-1, ct=0, cp=n-1;
	int gt=n*n;
	while(gt>=1){
		for(j=ct;j<=cp;j++){
			a[ht][j]=gt--;
		}
		ht++;
		for(i=ht;i<=hd;i++){
			a[i][cp]=gt--;
		}
		cp--;
		for(j=cp;j>=ct;j--){
			a[hd][j]=gt--;
		}
		hd--;
		for(i=hd;i>=ht;i--){
			a[i][ct]=gt--;
		}
		ct++;
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

