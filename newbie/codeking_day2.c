#include<stdio.h>
int main(){
	int n, i, count;
	int a[n];
	int j, k;
	scanf("%d", &n);
	for(i=1;i<=n;i++) scanf("%d", &a[i]);
	j=a[1];
	for(i=1;i<=n;i++){
		if(a[i]<j) j=a[i];
	}
	for(i=1;i<=n;i++){
		count=0;
		for(k=1;k<=j;k++){
			if(j%k==0){
				if(a[i]%k==0) count++;
			}
		}	
	}
	printf("%d", count);
	return 0;
}

