#include<stdio.h>
#include<stdbool.h>
bool kt(int n){
	int m=n;
	int dao=0;
	while(m>0){
		dao=dao*10+m%10;
		m/=10;
	}
	return dao==n;
}
bool kt9(int n){
	int a;
	while(n>0){
		a=n%10;
		n/=10;
		if(a==9) return false;
	}
	return true;
}
int main(){
	int n, i, a, b, c, count=0;
	scanf("%d", &n);
	for(i=2;i<=n;i++){
		if(kt(i)&&kt9(i)){
			count++;
			printf("%d ", i);
		}
	}
	printf("\n%d", count);
	return 0;
}

