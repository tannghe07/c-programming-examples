#include<stdio.h>
int main(){
	int max, a, b;
	scanf("%d%d", &a, &b);
	/*( dieu kien) ? ( if true) : ( if false); */
	max=(a>b)? a:b;
	printf("Max= %d", max);
	return 0;
}

