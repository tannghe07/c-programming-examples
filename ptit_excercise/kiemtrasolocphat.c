#include<stdio.h>
int main(){
	int a, b,c=10;
	scanf("%d", &a);
	while(1){
		b=a%10;
		if(b!=0&&b!=6&&b!=8) {
			printf("0");
			return 0;
		}
		c= a-b;
		a=c/10;
		printf("1");
		return 0;
	}
	return 0;
}

