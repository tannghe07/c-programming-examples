#include<stdio.h>
int main(){
	int h, i, j;
	scanf("%d", &h);
	int arr[100][100];
	for(i=1;i<=h;i++){
		for(j=h;j>=i;j--){
			arr[1][h]=64+h-1;
			arr[i+1][j]=arr[i][j]-1;
			arr[i][j-1]=arr[i][j]+1;
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

