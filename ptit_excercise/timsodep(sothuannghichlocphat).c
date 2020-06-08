#include<stdio.h>
#include<stdbool.h>
bool tn(int n){
	int i;
	int sum=0;
	int m=n;
	while(m){
		i=m%10;
		m/=10;
		sum*=10;
		sum+=i;
	}if(sum==n) return true;
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
bool chuso(int n){
	int i;
	while(n){
		i=n%10;
		n/=10;
		if(i==6) return true;
	}
	return false;
}
int main(){
	int a, b, i;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
	for(i=a;i<=b;i++){
		if(tn(i)&&tong(i)&&chuso(i)){
			printf("%d ", i);
		}
	}
	return 0;
}

