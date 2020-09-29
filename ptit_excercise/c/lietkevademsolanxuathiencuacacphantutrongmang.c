#include<stdio.h>
int main(){
	int n, i, j, k, dem, count=0;
	int a[100];
	int b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<n;i++) b[i]=1;
	for(i=0;i<n;i++){
		dem=1;
		if(b[i]){
			b[i]=0;
			for(j=i+1;j<n;j++){
				if(a[j]==a[i]){
					dem++;
					b[j]=0;
				}
			}
			printf("%d %d\n", a[i], dem);
		}
	}
	return 0;
}

