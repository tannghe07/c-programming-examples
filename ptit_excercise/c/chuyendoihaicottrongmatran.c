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
	for(i=0;i<m;i++){
		int tmp=a[i][k-1];
		a[i][k-1]=a[i][h-1];
		a[i][h-1]=tmp;
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

