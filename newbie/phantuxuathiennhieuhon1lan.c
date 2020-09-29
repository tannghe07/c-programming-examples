#include<stdio.h>
int main(){
	int a[100];
	int b[100];
	int n, i, j, count, dem=0, k=0;
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(a[j]==a[i]){
				count++;
			}
		}
		if(count>1){
			dem++;
			b[k]=a[i];
			k++;
		}
	}
	printf("%d\n", dem);
	for(i=0;i<k;i++){
		printf("%d ", b[i]);
	}
	return 0;
}

