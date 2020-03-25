#include<stdio.h>
int kt(int n){
	int i, j, b=0;
	b=n;
	while(n){
		j=j*10;
		i=n%10;
		j+=i;
		n/=10;
	}
	if(j==b) return 1;
	else return 0;
}
int main(){
	int n, i;
	scanf("%d", &n);
	for(i=2; i<=n; i++){
		if(kt(i)==1){
			printf("%d ", i);
		}
	}
	return 0;
}

