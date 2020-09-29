#include<stdio.h>
int main(){
	int n, i, j;
	int a[100];
	int b[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<n;i++) b[i]=1;
	for(i=0;i<n;i++){
		if(b[i]){
			b[i]=1;
			for(j=i+1;j<n;j++){
				if(a[i]==a[j]) b[j]=0;
			}
			printf("%d ", a[i]);
		}
	}
	return 0;
}

