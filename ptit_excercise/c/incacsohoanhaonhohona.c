#include<stdio.h>
#include<stdbool.h>
bool kt(int n){
	int i, sum=0;
	for(i=1;i<=n/2;i++){
		if(n%i==0) sum+=i;
	}if(sum==n) return true;
	return false;
}
int main(){
	int a, i;
	scanf("%d", &a);
	for(i=1;i<=a;i++){
		if(kt(i)) printf("%d ", i);
	}
	return 0;
}

