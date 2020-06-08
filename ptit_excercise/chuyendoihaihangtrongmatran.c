#include<stdio.h>
int main(){
	int m, n, i, j;
	int a[100][100];
	scanf("%d%d", &m, &n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	int k, h;
	scanf("%d%d", &k, &h );
	for(j=0;j<n;j++){
		int tmp=a[k-1][j];
		a[k-1][j]=a[h-1][j];
		a[h-1][j]=tmp;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

