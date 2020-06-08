#include<stdio.h>
#include<stdbool.h>
bool tn(int n){
	int i,j=0;
	int m=n;
	while(m){
		j*=10;
		i=m%10;
		m/=10;
		j+=i;
	}if(j==n) return true;
	return false;
}
bool snt(int n){
	int i;
	int count=0;
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}
	}if(count==2) return true;
	return false;
}
bool uoc(int n){
	int i;
	int count=0;
	for(i=2;i<=n;i++){
		if(snt(i)){
			if(n%i==0){
				count++;
			}
		}
	}if(count>=3) return true;
	return false;
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
		if(uoc(n)&&tn(n)){
			printf("%d ", n);
		}
	}
	return 0;
}

