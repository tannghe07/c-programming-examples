#include<stdio.h>
int main(){
	int h, i, j, k;
	scanf("%d", &h);
	for(i=1;i<=h;i++){
		for(j=h-1;j>=i;j--){
			printf("~");
		}
		for(k=1;k<2*i;k++){
			if(k==2*i-1||k==1||i==h)	printf("*");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}

