#include<stdio.h>
int main(){
	int h, i, j;
	scanf("%d", &h);
	for(i=1;i<=2*h;i+=2){
		for(j=1;j<=i;j++){
			if(j==(i+1)/2) printf("%c", 64+i-1);
			else if(j<(i+1)/2) printf("%c", 64+2*j-2);
			else if(j>(i+1)/2) printf("%c", 64+2*i-2*j);
			else printf("1");
		}
		printf("\n");
	}
	return 0;
}

