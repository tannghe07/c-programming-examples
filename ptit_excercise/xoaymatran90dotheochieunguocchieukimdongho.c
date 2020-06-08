#include<stdio.h>
int main(){
	int arr[100][100], brr[100][100];
	int n, i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &arr[i][j]);
		}
	}for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			brr[i][j]=arr[j][n-1-i];
		}
	}for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ", brr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

