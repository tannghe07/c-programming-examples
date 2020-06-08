#include<stdio.h>
int main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	if(a==b&&a==c) printf("3");
	else if(a==b&&b!=c||a==c&&c!=b||b==c&&c!=a) printf("2");
	else if(a*a+b*b==c*c||a*a+c*c==b*b||c*c+b*b==a*a) printf("1");
	return 0;
}

