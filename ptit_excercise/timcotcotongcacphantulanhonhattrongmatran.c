#include<stdio.h>
int main(){
	int n, i, j, k=0, t;
	int a[100][100];
	int b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++) scanf("%d", &a[i][j]);
	}
	for(j=0;j<n;j++){
		t=0;
		for(i=0;i<n;i++){
			t+=a[i][j];
		}
		b[j]=t;
	}
	int min=999999;
	for(j=0;j<n;j++){
		if(b[j]<min){
			min=b[j];
			k=j+1;
		}
	}
	printf("%d\n", k);
	for(i=0;i<n;i++) printf("%d ", a[i][k-1]);
	return 0;
}

