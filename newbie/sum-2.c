#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	double sum = 0;
	double i;
	for(i=1; i<=n; i++)
	 sum += 1/i;
	printf("Sum = % lf", sum);
	return 0;
}

