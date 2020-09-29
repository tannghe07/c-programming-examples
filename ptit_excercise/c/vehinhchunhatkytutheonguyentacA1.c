#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	int arr[a][b];
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			if(a>b){
				arr[1][j]=97+a-1;
				arr[i][1]=97+a-1;
			}
			else {
				arr[1][j]=97+b-1;
				arr[i][1]=97+b-1;
			}
			arr[i+1][j+1]=arr[i][j]-1;
			printf("%c", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

