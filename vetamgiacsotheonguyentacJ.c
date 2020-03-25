#include<stdio.h>
int main(){
	int a, b, c, h;
	scanf("%d", &h);
	for(a=1;a<=h;a++){
		for(b=1;b<=a;b++){
			if(a%2==0) printf("%d", a-b+1);
			else printf("%d", b);
		}printf("\n");
	}
	return 0;
}

