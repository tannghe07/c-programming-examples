#include<stdio.h>
#include<math.h>
int dem(int n){
	int count=0;
	while(n>0){
		n/=10;
		++count;
	}
	return count;
}
int tong(int n){
	int i, j, sum=0, b=0;
	b=n;
	while(n){
		i=n%10;
		n/=10;
		j=pow(i, dem(b));
		sum+=j;
	}
	return sum;
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
	for(i=a;i<=b; i++){
		if(tong(i)==i) {
			count++;
			printf("%d ", i);
		}
	}if(count==0) printf("0");

	return 0;
}

