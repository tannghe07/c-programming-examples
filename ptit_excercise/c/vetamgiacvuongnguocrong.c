#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			if(i==1||i==n||j==n||j==i) printf("*");	
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}

