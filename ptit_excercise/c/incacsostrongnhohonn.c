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
	int a, n, sum, bientam, count;
	scanf("%d", &a );
	for(n=1;n<=a;n++){
		count=0;
		bientam=n;
		sum=0;
		while(bientam>0){
		sum+=gt(bientam%10);
		bientam/=10;
		}
		if(sum==n){
			printf("%d ", n);
			count++;
		}
	}
	return 0;
}

