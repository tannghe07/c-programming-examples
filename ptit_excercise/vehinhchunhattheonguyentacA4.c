#include<stdio.h>
int main(){
		int a, b, i=0, j=0;
	scanf("%d%d", &a , &b );
	int arr[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(a>b) {arr[i][b-1]=a;arr[a-1][j]=a;}
			
			else {arr[i][b-1]=b;arr[a-1][j]=b;}
			 
			arr[i-1][j-1] = arr[i][j]-1;
			
			printf("%d", arr[i][j]);
		}printf("\n");
	}
	return 0;
}

