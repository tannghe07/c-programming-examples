#include<stdio.h>
#define max 100
void nhap(int a[max][max], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
}
int main(){
	int n, i, j;
	int a[max][max];
	int b[max][max];
	scanf("%d", &n);
	nhap(a, n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[j][i];
			printf("%d ", b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

