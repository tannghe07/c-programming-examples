#include<stdio.h>
#define N 100
void nhap(int arr[N][N], int m, int n){
	puts("Nhap cac phan tu cua mang:\n ");
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			scanf("%d", &arr[i][j]);//m la so hang, n la so cot
		}
	}
}
void xuat(int arr[N][N], int m, int n){
	puts("\nCac phan tu cua mang:\n");
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%5d", arr[i][j]);//m la so hang, n la so cot
		}printf("\n");
	}
}
int main(){
	int arr[N][N];
	int m, n;
	puts("\nNhap so hang so cot: ");
	scanf("%d%d", &m, &n);
	nhap(arr, m, n);
	xuat(arr, m, n);
	return 0;
}

