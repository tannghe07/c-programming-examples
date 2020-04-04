#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int arr[100][100];
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			arr[1][n]=65;
			arr[i+1][j]=arr[i][j]+2;
			arr[i][j-1]=arr[i][j]+2;
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

