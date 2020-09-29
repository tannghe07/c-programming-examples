#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int arr[n][n];
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			arr[1][n]=1;
			arr[i+1][j]=arr[i][j]+1;
			arr[i][j-1]=arr[i][j]+n-(n-j);
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

