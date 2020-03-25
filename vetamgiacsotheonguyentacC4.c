#include<stdio.h>
int main(){
	int h, i ,j, k;
	scanf("%d", &h);
	for(i=1;i<=h;i++){
		for(j=1;j<i;j++){
			printf("~");
		}
		for(k=h;k>=i;k--){
			printf("%d", h-k+1);
		}
		printf("\n");
	}
	return 0;
}

