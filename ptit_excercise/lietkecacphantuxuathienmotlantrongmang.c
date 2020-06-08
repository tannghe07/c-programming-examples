#include<stdio.h>
int main(){
	int n, i, j, dem, count=0;
	int a[100];
	int b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<n;i++){
		dem=0;
		for(j=0;j<n;j++){
			if(a[i]==a[j]&&i!=j) dem=1;
		}
		if(dem==0){
			printf("%d ", a[i]);
			count++;
		}
	}
	if(count==0) printf("0");
	return 0;
}

