#include<stdio.h>
int main(){
	int m, i, j;
	int a[100][100];
	scanf("%d", &m);
	for(i=0;i<m;i++){
		for(j=0;j<m;j++) scanf("%d", &a[i][j]);
	}
	for(i=0;i<m;i++){
		int tmp=a[i][i];
		a[i][i]=a[i][m-i-1];
		a[i][m-i-1]=tmp;
	}
	for(i=0;i<m;i++){
		for(j=0;j<m;j++) printf("%d ", a[i][j]);
		printf("\n");
	}
	return 0;
}

