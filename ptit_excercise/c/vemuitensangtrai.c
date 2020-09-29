#include<stdio.h>
int main(){
	int n, a, b, c, i, j;
	scanf("%d", &n);
	for(a=1;a<=n;a++){
		for(i=n;i>a;i--){
			printf("~");
		}
		for(b=n;b>=a;b--){
			printf("*");
		}
		printf("\n");
	}for(a=1;a<=n;a++){
		for(j=1;j<a;j++){
			printf("~");
		}
		for(c=1;c<=a;c++){
			if(a==1) printf("");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}

