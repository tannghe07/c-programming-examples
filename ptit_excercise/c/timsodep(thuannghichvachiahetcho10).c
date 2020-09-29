#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool tn(int n){
	int m=n;
	int i, j=0;
	while(m){
		i=m%10;
		m/=10;
		j*=10;
		j+=i;
	}if(j==n) return true;
	return false;
}
bool cs(int n){
	int i, j=0;
	while(n){
		i=n%10;
		n/=10;
		j+=i;
	}if(j%10==0) return true;
	return false;
}
int main(){
	int n, count=0, i, a, b;
	scanf("%d", &n);
	a=pow(10, n-1);
	b=pow(10, n);
	for(i=a;i<b;i++){
		if(tn(i)&&cs(i)) count++;
	}
	printf("%d", count);
	return 0;
}

