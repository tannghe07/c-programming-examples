#include<stdio.h>
int main(){
	int a, b, c, i, j, k;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	for(i=a;i<=b;i++){
		k=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				k+=j;
			}
		}if(k==i) printf("%d ", i);
	}
	return 0;
	return 0;
}

