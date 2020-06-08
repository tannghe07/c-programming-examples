#include<stdio.h>
int main(){
	unsigned long long n, m, j, i;
	int count=0;
	scanf("%llu%llu", &n, &m);
	if(m%n==0){
		j=m/n;
		for(i=2;i<=3;i++){
			for(;j%i==0;j/=i) count++;
		}
		if(j!=1) printf("-1");
		else printf("%d", count);
		}
		else printf("-1");
	return 0;
}

