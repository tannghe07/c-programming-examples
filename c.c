#include<stdio.h>
int main(){
	int a;
	long long b;
	char c;
	double d;
	float e;
	scanf("%d", &a);
	scanf("%lld",&b);
	c=getchar();
	scanf("%lf", &d);
	scanf("%f", &e);
	printf("%d\n%lld\n",a,b);
	printf("%c\n", c);
	printf("%lf\n%f", d, e);
	return 0;
}

