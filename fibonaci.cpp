#include<stdio.h>

unsigned long long fibo(int n){
	if(n==0||n==1)
		return n;
	else 
		return (fibo(n-1)+fibo(n-2));
}
int main(){
	int i;
	for(i=0; i<21; i++){
		printf("%d = %lld\n", i, fibo(i));
	}
	return 0;
}
