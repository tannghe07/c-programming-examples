#include<stdio.h>
int main(){
	int a[100];
	int n, i, j;
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<n-1;i++){
		int min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]) min=j;
		}
		int temp=a[i];
		a[i]=a[min];
		a[min]=temp;
		for(j=0;j<n;j++){
			printf("%d ", a[j]);
		}
		printf("\n");
	}
	return 0;
}

