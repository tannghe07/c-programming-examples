#include<stdio.h>
int main(){
	long long n;
	scanf("%lld", &n);
	printf("%lld", ((n-1)/2+1)*(n+1)/2);
	return 0;
}

