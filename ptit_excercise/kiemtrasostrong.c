#include<stdio.h>
#include<math.h>
int gt(int t){
	int giaithua=1, i;
	for(i=1;i<=t;i++){
		giaithua*=i;
	}
	return giaithua;
}
int main(){
	int n, j, sum=0, bientam;
	scanf("%d", &n);
	bientam=n;
	while(n){
		sum+=gt(n%10);
		n/=10;
	}if(sum==bientam){
		printf("1");
	}else printf("0");
	return 0;
}

