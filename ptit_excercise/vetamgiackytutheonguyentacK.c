#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int arr[n][n];
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			arr[1][1]=65;
			arr[i+1][j]=arr[i][j]+1;
			arr[i][j+1]=arr[i][j]+n-j;
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

