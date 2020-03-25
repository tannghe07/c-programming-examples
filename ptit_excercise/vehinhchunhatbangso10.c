#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(i%2==0) printf("0");
			else printf("1");
		}
		printf("\n");
	}
	return 0;
}

