#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	for(i=1;i<2*n;i++){
		for(j=1;j<=2*n;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

