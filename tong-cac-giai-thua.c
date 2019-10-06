#include<stdio.h>
int main(){
	int n, i;
	unsigned long long sum=0, giaithua= 1;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		giaithua*=i;
		sum+=giaithua;
	}printf("sum = %lld", sum);
	return 0;
}

