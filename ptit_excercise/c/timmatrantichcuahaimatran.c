#include<stdio.h>
#define max 100
void nhap(int n, int m, int arr[max][max]){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &arr[i][j]);
		}
	}
}
void xuat(int n, int m, int arr[max][max]){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
int tich(int n, int m, int arr1[max][max], int arr2[max][max], int arr3[max][max]){
	int i, j, k, l;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			arr3[i][j] = 0;
				for(k=0;k<m;k++) arr3[i][j]+=arr1[i][k]*arr2[k][j];
			}
		}
	}
int main(){
	int cot, hang;
	int arra[max][max];
	int arrb[max][max];
	int arrc[max][max];
	scanf("%d%d", &hang, &cot);
	nhap(hang, cot, arra);
	nhap(cot, hang, arrb);
	arrc[max][max] = tich(hang, cot, arra, arrb, arrc);
	xuat(hang, hang, arrc);
	return 0;
}

