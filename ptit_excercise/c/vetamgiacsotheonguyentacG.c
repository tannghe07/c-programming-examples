#include<stdio.h>
int main(){
	int n, i, j;
	scanf("%d", &n);
	int arr[n][n];
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			if(i%2==0){
				arr[i][1]=2;
				arr[i][j+1]=arr[i][j]+2;
				printf("%d", arr[i][j]);
			}
			else {
				arr[i][1]=1;
				arr[i][j+1]=arr[i][j]+2;
				printf("%d", arr[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

