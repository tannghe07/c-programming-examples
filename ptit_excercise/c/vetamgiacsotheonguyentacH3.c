#include<stdio.h>
int main(){
	int h, i, j, k;
	scanf("%d", &h);
	int arr[h][h*2-1];
	for(i=0;i<h;i++){
		for(j=0;j<h+i;j++){
			if(j==h-1) printf("%d", 2*i+2);
			else if(j<h-1&&j>h-i-2) printf("%d", -2*h+2*i+2*j+4);
			else if(j>h-1) printf("%d", 2*h+2*i-2*j); 
			else printf("~");
		}
		printf("\n");
	}
	return 0;
}

