#include<stdio.h>
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++)
			printf("~");
		for(k=n;k>=i;k--){
		if(k==n||k==i||i==1||i==n)	printf("*");
		else printf(".");
		}
		printf("\n");
	}
	return 0;
}

