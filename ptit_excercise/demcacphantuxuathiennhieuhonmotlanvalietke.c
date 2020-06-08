#include<stdio.h>
int main(){
	int n, i, j, k=0, count, dem=0;
	int a[100];
	int b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<n;i++) b[i]=1;
	for(i=0;i<n;i++){
		count=1;
		if(b[i]){
			b[i]=0;
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]){
					count++;
					b[j]=0;
				}
			}
			if(count>1){
				dem++;
				b[k]=a[i];
				k++;
			}
		}
	}
	printf("%d\n", dem);
	for(i=0;i<k;i++){
		printf("%d ", b[i]);
	}
	return 0;
}

