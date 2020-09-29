#include<stdio.h>
int main(){
	int a;
	scanf("%d", &a);
	if(a<0) printf("0");
	else if(a%2==0) printf("0");
	else if(a%2!=0) printf("1");
	return 0;
}

