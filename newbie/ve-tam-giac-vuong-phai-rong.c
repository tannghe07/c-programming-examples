#include<stdio.h>
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=n-1;j>i;j--){
			printf("~");
		}
		for(k=0;k<=i;k++){
			if(i==0||i==n-1||k==0||k==i){
				printf("*");
			}
			else printf(".");
			
		}
		printf("\n");
	}
	
	return 0;
}

