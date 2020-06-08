#include<stdio.h>
int main(){
	int a, b, i, sum=0;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	for(i=a;i<=b;i++){
		sum+=i;
	}
	printf("%d", sum);
	return 0;
}

