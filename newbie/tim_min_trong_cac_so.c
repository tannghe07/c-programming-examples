#include<stdio.h>
int main(){
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int min=a;
	if(b<min) printf("%d", b);
	else if(c<min) printf("%d", c);
	else if(d<min) printf("%d", d);
	else printf("%d", min);
	return 0;
}

