#include<stdio.h>
void nhap(int a[100][100], int n, int m){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d", &a[i][j]);
		}
	}
}
int main(){
	int n, m;
	int i, j, k;
	int a[100][100];
	int b[100][100];
	int c[100][100];
	scanf("%d%d", &n, &m);
	nhap(a, n, m);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			c[i][j]=0;
			for(k=0;k<m;k++){
				c[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
}

