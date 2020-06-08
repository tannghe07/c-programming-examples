#include<stdio.h>
#include<stdbool.h>
bool tn(int n){
	int m=n;
	int i, sum=0;
	while(m){
		i=m%10;
		m/=10;
		sum*=10;
		sum+=i;
	}if(sum==n) return true;
	return false;
}
bool cs(int n){
	int i;
	while(n){
		i=n%10;
		n/=10;
		if(i==6) return true;
	}
	return false;
}
bool tong(int n){
	int i, sum=0;
	while(n){
		i=n%10;
		n/=10;
		sum+=i;
	}if(sum%10==8) return true;
	return false;
}
int main(){
	int a, b, i;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		int tmp=a;
		a=b;
		b=tmp;
	}
	for(i=a;i<=b;i++){
		if(tn(i)&&cs(i)&&tong(i)) printf("%d ", i);
	}
	return 0;
}

