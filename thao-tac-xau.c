#include<stdio.h>
#include<string.h>

int main(){
	char str1[20];
	char str2[30];
	char str[100];
	printf("Nhap vao str1:");
	fgets(str1, 20, stdin);
	printf("\nNhap vao str2:");
	fgets(str2, 30, stdin);
	strcpy(str, str1);
	strncat(str,str2,30);// noi xau ki tu o str2 vao sau str1
	puts(str);
	return 0;
}

