#include<stdio.h>
#include<math.h>
int main(){ 
	int n, a, b, c, i, j;
	scanf("%d", &n);
	for(a=1;a<=n;a++){
		for(i=1;i<a;i++){
			printf("~~");
		}
		for(b=n;b>=a;b--){
			printf("*");
		}
		printf("\n");
	}
	for(a=1;a<=n;a++){
		for(j=n-1;j>a;j--){
			printf("~~");
		}
		for(c=1;c<=a+1;c++){
			if(a==n) printf("");
			else printf("*");
		}
		printf("\n");
	}
	return 0;
}

