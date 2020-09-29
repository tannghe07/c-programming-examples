#include<stdio.h>
int main(){
	int a, b, c, i, sum=0;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	for(i=a; i<=b; i++){
		sum+=i;	
	}printf("%d", sum);
	return 0;
}

