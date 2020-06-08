#include<stdio.h>
#include<stdbool.h>
int tn(int n){
	int i;
	int sum=0;
	int m=n;
	while(m){
		i=m%10;
		m/=10;
		sum*=10;
		sum+=i;
	}return sum;
}
bool nt(int n){
	int i;
	if(n<2) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int a, b, n;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
	for(n=a;n<=b;n++){
		if(nt(n)&&nt(tn(n))&&n!=tn(n)){
			printf("%d ", n);
		}
	}
	return 0;
}

