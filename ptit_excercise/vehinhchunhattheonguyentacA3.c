#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	int arr[a][b];
	for(i=a;i>=1;i--){
		for(j=1;j<=b;j++){
			if(a>b){
				arr[i][1]=a;	
				arr[a][j]=a;
			}	
			else {
				arr[i][1]=b;
			 	arr[a][j]=b;
			}
//			arr[i-1][j+1]=arr[i][j]-1;
		}
	}
	
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

