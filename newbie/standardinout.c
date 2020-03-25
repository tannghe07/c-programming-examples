#include<stdio.h>
int main(){
	char c;// int c cung duoc
	c=getchar();
	printf("Lan 1: %c\nLan 2: ", c);
	int cc= putchar(c);
	printf("\nLan 3: %c\n", cc);
	fflush(stdin);
	char str[15];
	fgets(str, 15, stdin);
	puts(str);
	return 0;
}

