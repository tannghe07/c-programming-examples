#include<stdio.h>
int main(){
	int n, a, b, c;
	scanf("%d", &n);
	for(a=1;a<=n;a++){
		for(b=1;b<=a;b++){
			printf("*");
		}
		printf("\n");
	}
	for(a=1;a<=n;a++){
		for(c=n;c>a;c--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

