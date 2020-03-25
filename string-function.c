#include<stdio.h>
#include<stdlib.h>
int main(){
	char ptr[100];
	gets(ptr);
	char *p;
	long l;
	l=strtol(ptr, &p, 2);//chuyen doi tu he 2 sang he 10
	printf("\nGia tri long sau khi chuyen doi= %ld",l);
	printf("\nGia tri khong the chuyen doi= %s", p);
	return 0;
}

