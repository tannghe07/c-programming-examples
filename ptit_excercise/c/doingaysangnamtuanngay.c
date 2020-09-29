#include<stdio.h>
int main(){
	int a, b, nam, tuan, ngay;
	scanf("%d", &a);
	nam=a/365;
	b=a-(nam*365);
	tuan=b/7;
	ngay=b-(tuan*7);
	printf("%d %d %d", nam, tuan, ngay);
	return 0;
}

