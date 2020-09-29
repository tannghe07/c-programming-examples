#include<stdio.h>
int main(){
	int n, i, j, k;
	int a[100][100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=i+1;k<n;k++){
				if(a[k][j]>a[i][j]){
					int tmp=a[k][j];
					a[k][j]=a[i][j];
					a[i][j]=tmp;
				}
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

