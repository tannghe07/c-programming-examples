#include<stdio.h>
int fibo(int n){
	if(n==0||n==1)
		return n;
	else return (fibo(n-1)+fibo(n-2));
}
int main(){
	int n, i;
	scanf("%d", &n);
	int arr[100];
	for(i=0;i<n;i++){
		printf("%d ", fibo(i));
	}
	return 0;
}

