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
	int a, b, c, d, bientam=0;
	bientam=n;
	d=dem(n);
	while(n>0){
		a=n%10;
		n/=10;
		b=pow(a,d);
		c+=b;
	}
	if(c==bientam) return 1;
	else return 0;
}
int main(){
	int n, a, b;
	scanf("%d", &n);
	if(tong(n)==1) printf("1");
	else printf("0");
	return 0;
}

