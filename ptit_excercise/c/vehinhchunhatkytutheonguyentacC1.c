#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(i+j>b+1) printf("%c", b-j+1+64);
			else printf("%c", i+j-1+64);
		}
		printf("\n");
	}
	return 0;
}

