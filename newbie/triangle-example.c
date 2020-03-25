#include<stdio.h>
int main(){
	float a, b, c;
	printf("Nhap vao 3 canh cua tam giac: \n");
	scanf("%f%f%f", &a, &b, &c);
	if(a<=0||b<=0||c<=0) printf("Gia tri khong hop le!");
	if(a+b>c&&a+c>b&&b+c>a){
		if(a==b&&a==c) printf("Day la tam giac deu!");
		else if(a==b&&b!=c||a==c&&a!=b||b==c&&b!=a) printf("Day la tam giac can!");
		else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
			if(a==b&&a!=c||a==c&&a!=b||b==c&&b!=a) printf("Day la tam giac vuong can!");
			else printf("Day la tam giac vuong thuong!");
		}else printf("Day la tam giac thuong!");	
	} 		
	else printf("Khong tao thanh tam giac!");	
	return 0;
}

