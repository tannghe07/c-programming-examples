#include<stdio.h>
int main(){
	int a, b, i, j, k;
	scanf("%d%d", &a, &b);
	for(i=1;i<=a;i++){
		for(j=1;j<i;j++){
			printf("~");
		}for(k=b;k>=1;k--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

