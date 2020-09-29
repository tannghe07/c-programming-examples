#include<stdio.h>
int main(){
	int a, b, c=1;
	scanf("%d", &a);
	do{
		b=a%10;
		c=c*b;
		a=a/10;
	}while(a);
	printf("%d", c);
	return 0;
}

