#include<stdio.h>
int main(){
	int n, i, j;
	int a[100][100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>j) printf("    ");
			else{
				a[0][0]=1;
				a[0][j+1]=a[0][j]+j+1;
				a[i+1][j]=a[i][j]+1;
				printf("%4d", a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}

