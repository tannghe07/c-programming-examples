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
			if(a[j]>a[j-1]){
				int b=a[j];
				a[j]=a[j-1];
				a[j-1]=b;
			}
		}
	}
}
int main(){
	int a;
	scanf("%d", &a);
	int arr[a];
	nhap(arr, a);
	sapxep(arr, a);
	xuat(arr, a);
	return 0;
}

