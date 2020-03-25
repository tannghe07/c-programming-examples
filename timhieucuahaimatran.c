#include<stdio.h>
#define MAX 100
void nhap(int a[MAX][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void xuat(int a[MAX][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
void hieu(int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX], int m, int n){
	int i, j;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			c[i][j]=a[i][j]-b[i][j];
		}
	}
}
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	int aa[a][b];
	int ab[a][b];
	int ac[a][b];
	nhap(aa, a, b);
	nhap(ab, a, b);
	hieu(aa, ab, ac, a, b);
	xuat(ac, a, b);
	return 0;
}

