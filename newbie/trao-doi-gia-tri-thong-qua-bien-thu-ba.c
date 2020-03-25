#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d", &a, &b);
	printf("gia tri truoc khi trao doi: \n a=%d, b=%d",a ,b);
	c=a;
	a=b;
	b=c;
	printf("\ngia tri sau khi trao doi: \n a=%d, b=%d", a, b);
	return 0;
}

