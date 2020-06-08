#include<stdio.h>
int snt(int n){
	int i;
	if(n<2) return 0;
	for(i=2;i<n;i++){
		if(n%2==0) return 0;
	}
	return 1;
}
int main(){
	int n;
	scanf("%d", &n);
	if(snt(n)==1) printf("n la so nguyen to");
	else printf("n khong la so nguyen to");
	return 0;
}

