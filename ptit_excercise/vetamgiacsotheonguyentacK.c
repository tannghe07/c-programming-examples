#include<stdio.h>
int main(){
	int h, i, j;
	scanf("%d", &h);
	int arr[h][h];
	for(i=1;i<=h;i++){
		for(j=1;j<=i;j++){
			arr[1][1]=1;
			arr[i+1][1]=arr[i][1]+1;
			arr[i][j+1]=arr[i][j]+h-j;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

