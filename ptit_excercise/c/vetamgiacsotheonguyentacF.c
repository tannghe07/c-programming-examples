#include<stdio.h>
int main(){
	int h, i, j;
	scanf("%d", &h);
	for(i=1;i<=2*h;i+=2){
		for(j=1;j<=i;j++){
			printf("%d", j);
		}
		printf("\n");
	}
	return 0;
}

