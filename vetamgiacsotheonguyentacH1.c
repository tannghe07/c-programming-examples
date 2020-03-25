#include<stdio.h>
int main(){
	int h, i, j;
	scanf("%d", &h);
	for(i=1;i<=h;i++){
		for(j=1;j<=h+i-1;j++){
			if(j==h) printf("%d", 2*i-1);
			else if(j<h&&j>h-i) printf("%d", 2*i+2*j-2*h-1);
			else if(j>h) printf("%d", 2*i-2*j+2*h-1);
			else printf("~");
		}
		printf("\n");
	}
	return 0;
}

