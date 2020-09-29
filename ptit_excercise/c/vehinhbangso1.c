#include<stdio.h>
int main(){
	int n , i=0, j=0;
	scanf("%d", &n);
	int arr[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j) arr[i][j]=1;
			if(i<j) arr[i][j]=arr[i][j-1]+1;
			if(i>j) arr[i][j]=arr[i-1][j]+1;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

