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
	int n, i;
	scanf("%d", &n);
	for(i=1;i<=n; i++){
		if(tong(i)==i) printf("%d ", i);
	}
	return 0;
}

