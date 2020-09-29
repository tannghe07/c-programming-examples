#include<stdio.h>
int main(){
	int a, b, i, j;
	scanf("%d%d", &a, &b);
	int arr[a][b];
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			if(a%2==0&&b%2==0){
				if(i==(a-1)/2||i==(a-1)/2+1||j==(b-1)/2||j==(b-1)/2+1) arr[i][j]=0;
				else arr[i][j]=1;
			}else if(a%2!=0&&b%2!=0){
				if(i==(a-1)/2||j==(b-1)/2) arr[i][j]=0;
				else arr[i][j]=1;
			}
			else if(b%2==0&&a%2!=0){
				if(j==(b-1)/2||j==(b-1)/2+1||i==(a-1)/2) arr[i][j]=0;
				else arr[i][j]=1;
			}else if(b%2!=0&&a%2==0){
				if(j==(b-1)/2||i==(a-1)/2||i==(a-1)/2+1) arr[i][j]=0;
				else arr[i][j]=1;
			}printf("%d", arr[i][j]);
		}printf("\n");
	}
	return 0;
}

