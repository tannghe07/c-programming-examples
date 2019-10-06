#include<stdio.h>
int main(){
	int n, s, s1, s2, i;
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		s+=i;
		if(i%2==0) s1+=i;
		if(i%2!=0) s2+=i;
	}printf("Tong cua n so hang: %d\nTong cua cac so chan nho hon n: %d\nTong cua cac so le nho hon n: %d ", s, s1, s2);
	return 0;
}
