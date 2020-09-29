#include<stdio.h>
int main(){
	int n, i, j, o;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		int k=n;
		for(j=1;j<=2*n-1;j++){
			if(j<i) printf("%d", k--);
			else if(j>=i && j<=2*n-1-i) printf("%d", k);
			else printf("%d", k++);
		}
		printf("\n");
	}
	for(i=1;i<=n-1;i++){
		int k=n;
		for(j=1;j<=2*n-1;j++){
			if(j<n-i) printf("%d", k--);
			else if(j>=n-i && j<=n-1+i) printf("%d", k);
			else printf("%d", k++);
		}
		printf("\n");
	}
	return 0;
}

