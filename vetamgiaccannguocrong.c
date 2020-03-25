#include<stdio.h>
int main(){
	int h, i, j, k;
	scanf("%d", &h);
	for(i=1;i<=h;i++){
		for(j=1;j<i;j++){
			printf("~");
		}
		for(k=2*h+1;k>2*i;k--){
			if(k==2*h+1||k==2*i+1||i==1) printf("*");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}

