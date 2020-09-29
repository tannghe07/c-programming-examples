#include<stdio.h>
int main(){
	int n , i, j;
	scanf("%d", &n);
	int arr[n][n];
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			arr[1][j]=j;
			arr[i+1][j]=arr[i][j]+n;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

