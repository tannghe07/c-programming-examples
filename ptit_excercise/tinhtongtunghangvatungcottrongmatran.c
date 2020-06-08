#include<stdio.h>
int main(){
	int n, i, j;
	int a[100][100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(i=0;i<n;i++){
		int sum1=0;
		for(j=0;j<n;j++){
			sum1+=a[i][j];
		}
		printf("%d ", sum1);
	}
	printf("\n");
	for(i=0;i<n;i++){
		int sum2=0;
		for(j=0;j<n;j++){
			sum2+=a[j][i];
		}
		printf("%d ", sum2);
	}
	return 0;
}

