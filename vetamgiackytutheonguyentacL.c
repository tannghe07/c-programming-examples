#include<stdio.h>
int main(){
	int n, i, j, tmp;
	scanf("%d", &n);
	int arr[n][n];
	for(i=1;i<=n;i++){
		tmp=0;
		for(j=1;j<=i;j++){
			arr[1][1]=97;
			arr[i+1][j]=arr[i][j]+i;
			arr[i][j+1]=arr[i][j]+1;
			printf("%c", arr[i][j]);
			if(i%2==0){
				tmp=arr[i][j];
				arr[i][j]=arr[i][j+1];
				arr[i][j+1]=tmp;
			}
		}
		printf("\n");
	}
	return 0;
}

