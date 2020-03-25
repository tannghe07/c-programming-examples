#include<stdio.h>
int main(){
	float a, b, x;
	printf("Phuong trinh bac nhat ax+b=0\n");
	printf("Nhap vao hai he so a, b:\n");
	scanf("%f%f", &a, &b);
	if(a==0&&b==0){
		printf("Phuong trinh co vo so nghiem!");
	}else if(a==0&&b!=0){
		printf("Phuong trinh vo nghiem!");
	}else if(a!=0&&b==0){
		printf("Phuong trinh co nghiem x=0");
	}else if(a!=0&&b!=0){
		printf("Phuong trinh co nghiem duy nhat x= %f", x=-b/a);
	}
	return 0;
}

