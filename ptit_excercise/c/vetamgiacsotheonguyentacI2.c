#include<stdio.h>
int main(){
	int arr[100][100];
	int n, i, j, a=1, d;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			printf("%d ", d);
			d=d+a;
			a++;
		}
		printf("\n");
	}
	return 0;
}

