#include<stdio.h>
#include<stdbool.h>
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
bool kt(int n){
	int i;
	for(i=2;i<=n;i++){
		if(snt(i)){
			if(n%i==0){
				if(n%(i*i)==0) return true;
			}
		}
	}return false;
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
		if(kt(n)){
			printf("%d ", n);
		}
	}
	return 0;
}

