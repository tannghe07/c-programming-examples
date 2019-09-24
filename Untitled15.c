#include<stdio.h>
int main(){
	int a, b;
	scanf("%d%d", &a, &b);
	printf("Gia tri truoc khi trao doi: \n a=%d, b=%d", a, b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\nGia tri sau khi trao doi: \n a=%d, b=%d ", a, b);
	return 0;
}

