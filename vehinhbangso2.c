#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int arr[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			arr[0][j]=n;
			arr[i+1][0]=n;
			arr[i+1][j+1]=arr[i][j]-1;
			printf("%d ", arr[i][j]);
		}printf("\n");
	}
	return 0;
}

