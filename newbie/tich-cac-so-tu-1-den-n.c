#include<stdio.h>
int main(){
	int n, i;
	int sum=0, binhphuong=1;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		binhphuong=i*i;
		sum+=binhphuong;
	}printf("sum = %d", sum);
	return 0;
}

