#include<stdio.h>
int main(){
	double a, b ,c ;
	scanf("%lf", &a);
	printf("Luong cua ban la %lf", a);// Don vi: trieu vnd
	if(a>=15){
		b=a*30/100;
		printf("\nSo thue: %lf", b);
	}else if(a>=7&&a<15){
		b=a*20/100;
		printf("\nSo thue: %lf", b);
	}else if(a<7){
		b=a*10/100;
		printf("\nSo thue: %lf", b);
	}c=a-b;
	printf("\nLuong rong: %lf", c);
	return 0;
}

