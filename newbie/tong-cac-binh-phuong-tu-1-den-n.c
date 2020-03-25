#include<stdio.h>
int main(){
	int n, i;
	int sum, binhphuong;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		binhphuong=i*i;
		sum+=binhphuong;
	}printf("Sum = %d", sum);
	return 0;
}

