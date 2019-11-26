#include<stdio.h>
int main(){
	int n, i, count;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			printf("%5d", i);
			n/=i;
		}
	}
	return 0;
}

