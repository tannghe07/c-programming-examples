#include<stdio.h>
int main(){
	int a, c;
	int b=1;
	scanf("%d", &c);
	for(a=1; a<=c; a++){
		b = b * a;
	}
	printf("Giai thua cua %d = %d \n", c, b);
	return 0;
}

