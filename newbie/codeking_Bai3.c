#include<stdio.h>
int main(){
	int n, i, j, count;
	int a[n];
	scanf("%d", &n);
	for(i=1;i<=n;i++) scanf("%d", &a[i]);
	for(i=1;i<=n-1;i++)
		for(j=i+1;j<=n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	for(i=1;i<=n;i++){
		count=0;
		for(j=1;j<=a[1];j++){
			if(a[1]%j==0){
				if(a[i]%j==0&&a[i]!=a[1]) count++;
			}
		}	
	}
	printf("%d", count);
	return 0;
}

