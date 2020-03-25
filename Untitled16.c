#include<stdio.h>
int main(){
	int a;
	printf("Nhap vao so a= ");
	scanf("%d", &a);
	if(a>0){
		if(a%2==0) printf("a la so duong chan!");
		else printf("a la so duong le!");
	}else if (a==0){
		printf("0 la so chan, khong duong, khong am!");
	}else if (a<0){
		if(a%2==0) printf("a la so am chan!");
		else printf("a la so am le!");
	}
	
	return 0;
}

