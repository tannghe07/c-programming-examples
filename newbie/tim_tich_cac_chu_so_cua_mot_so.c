#include<stdio.h>
int main(){
	int n, i;
	int j=1;
	scanf("%d", &n);
	while(n){
		i=n%10;
		j*=i;
		n/=10;
	}
	printf("%d", j);
	return 0;
}

