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
void tach(int a[MAX], int b[MAX], int c[MAX], int n){
	int i, j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j]%2==0){
			b[j]=a[j];
			}
			else {
			c[j]=a[j];
			}
		}
	}
}
int main(){
	int a;
	scanf("%d", &a);
	int arra[a];
	int arrb[a];
	int arrc[a];
	nhap(arra, a);
	tach(arra, arrb, arrc, a);
	xuat(arrb, a);
	xuat(arrc, a);
	return 0;
}

