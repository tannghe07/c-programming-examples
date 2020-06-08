#include<stdio.h>
void swap(int *a, int *b){
	int tmp = *a;
	*a=*b;
	*b=tmp;
}
int main(){
	int a[100000];
	int i, n, j, k;
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<n-1;i++){
		int dk=0;
		for(j=1;j<n;j++){
			if(a[j-1]>a[j]){
				swap(&a[j-1], &a[j]);
				dk=1;
			}
		}
		for(k=0;k<n;k++){
			if(dk==1) printf("%d ", a[k]);
		}
		printf("\n");
	}
	return 0;
}
