#include<stdio.h>
int main(){
	int a, b;
	scanf("%d", &a);
	printf("So phut da goi cua ban la %d", a);
	if(a>=200){
		b=25000+(a-200)*200+150*400+50*600;
		printf("\nSo tien phai nop la %d", b);
	}else if(a>=50&&a<200){
		b=25000+(a-50)*400+50*600;
		printf("\nSo tien phai nop la %d", b);
	}else if(a<50){
    	b=25000+(50-a)*600;
		printf("\nSo tien phai nop la %d", b);
	}
	return 0;
}

