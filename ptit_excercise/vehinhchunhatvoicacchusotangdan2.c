#include<stdio.h>
int main(){
	int a, b, i=1, j=1;
	scanf("%d%d", &a, &b);
	int arr[a][b];
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			arr[i][j]=i+j-1;
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

