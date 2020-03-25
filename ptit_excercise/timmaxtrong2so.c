#include<stdio.h>
int main(){
	int a, b, max;
	scanf("%d%d", &a, &b);
	max=a;
	if(b>max){
		max=b;
	}
	printf("%d", max);
	return 0;
}

