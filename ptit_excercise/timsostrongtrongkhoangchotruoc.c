#include<stdio.h>
int gt(int n){
	int i;
	int gt=1;
	for(i=1;i<=n;i++){
		gt*=i;
	}return gt;
}
int tong(int n){
	int i, j=0;
	while(n>0){
		i=n%10;
		n/=10;
		j+=gt(i);
	}return j;
}
int main(){
	int a, b, c, i, count;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		c=a;
		a=b;
		b=c;
	}
	count=0;
	for(i=a;i<=b;i++){
		if(tong(i)==i){
			count++;
			printf("%d ", i);
		}
	}if(count==0) printf("0");
	return 0;
}

