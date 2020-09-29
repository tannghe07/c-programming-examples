#include<stdio.h>
int main(){
	int n, i, j, k;
	scanf("%d", &n);
	for(i=n;i<=2*n-1;i++){
		for(k=2*n-i;k>=1;k--){
			printf("*");
		}
		for(j=1;j<=i;j++){
			if(j<=(i-n)*2) printf("~");
			else printf("*");
		}
		printf("\n");
	}
	for(i=2*n-2;i>=n;i--){
		for(k=1;k<=(2*n-i);k++){
			printf("*");
		}
		for(j=1;j<=i;j++){
			if(j<=(i-n)*2) printf("~");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}

