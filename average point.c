#include<stdio.h>
int main(){
	int x, y, z, a;
	scanf("%d%d%d", &x, &y, &z);
	a=(x+y+z)/3;
	printf("diem trung binh = %d", a);
	if(a>=9.0){
		printf("\nHang A");
	}else if(a>=7.0&&a<9.0){
		printf("\nHang B");
	}else if(a>=5.0&&a<7.0){
		printf("\nHang C");
	}else if(a<5.0){
		printf("\nHang F");
	}
	return 0;
}

