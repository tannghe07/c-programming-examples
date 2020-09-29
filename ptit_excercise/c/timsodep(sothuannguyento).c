#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool snt(int n){
	int i;
	if(n<2) return false;
	else{
		for(i=2;i<=sqrt(n);i++){
			if(n%i==0) return false;
		}	
	return true;
    }
}
bool tong(int n){
	int a, b=0;
	while(n){
		a=n%10;
		b+=a;
		n/=10;
	}
	return (snt(b));
}
bool chuso(int n){
	int a;
	while(n){
		if(!snt(n%10)) return false;
		n/=10;
	}
	return true;
}
int main(){
	int a, b, i, count=0;
	scanf("%d%d", &a, &b);
	a<b;
	if(a>b){
		int c=a;
		a=b;
		b=c;
	}
	for(i=a;i<=b;i++){
		if(snt(i) && tong(i) && chuso(i)){
			count++;
		}
	}printf("%d", count);
	return 0;
}

