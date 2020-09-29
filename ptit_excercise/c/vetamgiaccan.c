#include<stdio.h>
int main(){
	int h, i, j, k;
	scanf("%d", &h);
	for(i=1;i<=h;i++){
		for(j=h-1;j>=i;j--){
			printf("~");
		}
		for(k=1;k<2*i;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

