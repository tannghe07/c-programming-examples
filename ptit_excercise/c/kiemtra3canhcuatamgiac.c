#include<stdio.h>
int main(){
	int a, b, c;
	scanf ("%d%d%d", &a, &b, &c);
	if(a<=0||b<=0||c<=0) {printf("0");}
	else{
		if(a+b==c||a+c==b||b+c==a) printf("0");
		else printf("1");
	}

	return 0;
}

