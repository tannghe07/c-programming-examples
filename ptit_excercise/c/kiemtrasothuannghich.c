#include<stdio.h>
int main(){
	int a, b, c, bientam;
	scanf("%d", &a);
	bientam=a;
	do{
		c*=10;
		b=a%10;
		c+=b;
		a/=10;
	}while(a);
	if (bientam==c) printf("1");
	else printf("0");
	return 0;
}

