#include<stdio.h>
int main(){
	int a; 
	scanf("%d", &a);
	if((a%4==0&&a%100!=0)||(a%400==0)){
		printf("%d la nam nhuan", a);
	}else{
		printf("%d khong la nam nhuan", a);
	}
	return 0;
}

