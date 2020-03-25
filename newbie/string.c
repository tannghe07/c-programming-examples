#include<stdio.h>
int main(){
	char c;
	c=getchar();
	printf("%d", c);
	printf("\n%c\n", c);
	char str[100];
	fflush(stdin);// xoa bo dem
	gets(str);
	printf("\n%s", str);
	return 0;
}

