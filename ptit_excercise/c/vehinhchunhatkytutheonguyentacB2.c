#include<stdio.h>
int main(){
	int i, j, a, b;
	scanf("%d%d", &a, &b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(i<a-b+j) printf("%c", b+64);
			else printf("%c", a-i+j+64);
		}
		printf("\n");
	}
	return 0;
}
