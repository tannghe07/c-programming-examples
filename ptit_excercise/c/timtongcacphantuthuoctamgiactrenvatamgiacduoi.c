#include<stdio.h>
int main(){
	int n, i, j, sum1=0, sum2=0;
	int a[100][100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>j) sum1+=a[i][j];
			else if(i<j) sum2+=a[i][j];
		}
	}
	printf("%d %d", sum2, sum1);
	return 0;
}

