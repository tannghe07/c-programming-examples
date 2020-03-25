#include<stdio.h>
int main(){
	int *ptr;
	int a=120, b=233; 
	ptr=&a;
	printf("Gia tri cua a la: %d", *ptr);
	ptr=&b;
	printf("\nGia tri cua b la: %d", *ptr);
	return 0;
}

