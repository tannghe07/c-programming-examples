#include<stdio.h>
int main(){
	int n, i, j, a, b, c;
	scanf("%d", &n);
	for(a=1;a<=n;a++){
		for(i=n;i>a;i--){
			printf("~");
		}
		for(b=1;b<=a;b++){
			printf("*");
		}
		printf("\n");
	}
	for(a=1;a<=n;a++){
		for(j=1;j<a;j++){
			printf("~");
		}
		for(c=n;c>=a;c--){
			if(c==n) printf(" ");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}

