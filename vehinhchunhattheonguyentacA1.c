#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	int arr[a][b];
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(a>b){
				arr[1][j]=a;
				arr[i][1]=a;
			}else{
				arr[1][j]=b;
				arr[i][1]=b;
			}arr[i+1][j+1]=arr[i][j]-1;
			printf("%d", arr[i][j]);
		}printf("\n");
	}
	return 0;
}

