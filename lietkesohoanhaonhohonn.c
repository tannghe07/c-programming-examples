#include<stdio.h>
int kt(int n){
	int i, sum=0;
	for(i=1;i<n;i++){
		if(n%i==0){
			sum+=i;
		}
	}if(sum==n) return 1;
	else return 0;
}
int main(){
	int n, i;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		if(kt(i)==1) printf("%d ", i);
	}
	return 0;
}

