#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d", &a);
	do{
		b=a%10;
		c+=b;
		a/=10;
	}while(a);
	printf("%d", c);
	return 0;
}

