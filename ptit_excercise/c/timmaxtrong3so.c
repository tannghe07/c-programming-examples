#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	int max=a;
	if(max<b)max=b;
	if(max<c)max=c;
	printf("%d", max);
	return 0;
}

