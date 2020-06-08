#include<stdio.h>
int main(){
	int i, j, a, b;
	scanf("%d%d", &a, &b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(i+j>b+1) printf("%c", b+63);
			else printf("%c", i+j-1+63);
		}
		printf("\n");
	}
	return 0;
}

