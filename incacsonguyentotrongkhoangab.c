#include<stdio.h>
int main(){
	int a, b, c, i, j, count;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	for(i=a;i<=b;i++){
		count=0;
		for(j=1;j<i;j++){
			if(i%j==0){
				count++;
			}
		}if(count==1) printf("%d ", i);
	}
	return 0;
}

