#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a*a==b*b+c*c||b*b==a*a+c*c||c*c==b*b+a*a) printf("1");
	if(a==b&&a==c&&b==c) printf("3");
	if((a==b&&a!=c)||(a==c&&a!=b)||(c==b&&a!=c)) printf("2");
	return 0;
}

