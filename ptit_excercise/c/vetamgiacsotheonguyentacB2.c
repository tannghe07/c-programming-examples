#include<stdio.h>
int main(){
	int a, b, c, h;
	scanf("%d", &h);
	for(a=1;a<=h;a++){
		for(c=h;c>a;c--){
			printf("~");
		}
		for(b=1;b<=a;b++){
		printf("%d", a);
		}printf("\n");
	}
	return 0;
}

