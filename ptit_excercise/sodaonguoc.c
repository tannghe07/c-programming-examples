#include<stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d", &a);
	do{
		d=d*10;
		b=a%10;
		d+=b;
		a/=10;
	}while(a);
	printf("%d", d);
	return 0;
}

