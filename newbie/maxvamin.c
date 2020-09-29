#include<stdio.h>
int main(){
	int n, i, j=0, k=0;
	int a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int max=0;
	for(i=n-1;i>=0;i--){
		if(a[i]>max){
			max=a[i];
			j=i;
		}
	}
	int min=a[n-1];
	for(i=n-1;i>=0;i--){
		if(a[i]<min){
			min=a[i];
			k=i;
		}
	}
	printf("%d %d\n", max, j+1);
	printf("%d %d", min, k+1);
	return 0;
}

