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
void sapxep(int a[MAX], int n){
	int i, j;
	for(i=0;i<n-1;i++){
		for(j=n-1;j>i;j--){
			if(a[j-1]>a[j]){
				int tmp=a[j-1];
				a[j-1]=a[j];
				a[j]=tmp;
			}
		}
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
	sapxep(arrb, m);
	xuat(arrb, m);
	sapxep(arrc, n);
	xuat(arrc, n);
	return 0;
}

