#include<stdio.h>
int main(){
	int c, i, j, k;
	scanf("%d", &c);
	for(i=1;i<=c;i++){
		for(j=c;j>i;j--){
			printf("~");
		}for(k=1;k<=c;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

