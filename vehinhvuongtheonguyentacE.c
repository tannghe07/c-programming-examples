#include<stdio.h>
int main(){
	int i, j, n;
	scanf("%d", &n);
	int arr[2*n][2*n];
	for(i=1;i<=2*n-1;i++){
		for(j=1;j<=2*n-1;j++){
			arr[1][j]=arr[2*n-1][j]=n;
			arr[i][1]=arr[i][2*n-1]=n;
			if(j<=n) arr[i+1][j+1]=arr[i][j]-1;
			else arr[i+1][j-1]=arr[i][j]-1;
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

