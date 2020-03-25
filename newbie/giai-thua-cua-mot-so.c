#include<stdio.h>
int main(){
	int n, i;
	int giaithua=1;
	scanf("%d", n);
	for(i=1; i<=n; i++){
		giaithua*=i;
	}printf("%d", giaithua);
	return 0;
}

