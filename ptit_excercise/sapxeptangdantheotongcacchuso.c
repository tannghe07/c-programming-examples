#include<stdio.h>
int tong(int n){
	int j, sum=0;
	while(n>0){
		j=n%10;
		n/=10;
		sum+=j;
	}
	return sum;
}
int main(){
	int a, b, sum1, sum2;
	scanf("%d%d", &a, &b);
	sum1=tong(a);
	sum2=tong(b);
	if(sum1<=sum2) printf("%d %d", a, b);
	else printf("%d %d", b, a);
	return 0;
}

