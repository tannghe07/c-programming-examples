#include<stdio.h>
#define MAX 100
void nhap(int a[MAX], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}
void xuat(int a[MAX], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
int dao(int a[MAX], int b[MAX], int n){
	int i;
	for(i=0;i<n;i++){
		b[i]=a[n-i-1];
	}
}
int main(){
	int a;
	scanf("%d", &a);
	int arra[a];
	int arrb[a];
	nhap(arra, a);
	dao(arra, arrb, a);
	xuat(arrb, a);
	return 0;
}

