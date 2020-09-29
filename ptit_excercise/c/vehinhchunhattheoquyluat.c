#include<stdio.h>
int main(){
	int a, b, i=0, j=0;
	scanf("%d%d", &a, &b);
	int arr[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			arr[0][0]=1;
			arr[i][j+1]=arr[i][j]+1;
			arr[i+1][j]=arr[i][j]+b;
			printf("%d", arr[i][j]);
		}printf("\n");
	}
	return 0;
}

