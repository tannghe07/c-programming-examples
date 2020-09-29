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
int main(){
	int a, i, m=0, n=0;
	scanf("%d", &a);
	int arra[MAX];
	int arrb[MAX];
	int arrc[MAX];
	nhap(arra, a);
	for(i=0;i<a;i++){
		if(arra[i]%2==0){
			arrb[m]=arra[i];
			m++;
		}
		else{
			arrc[n]=arra[i];
			n++;
		}
	}
	xuat(arrb, m);
	printf("\n");
	xuat(arrc, n);
	return 0;
}

