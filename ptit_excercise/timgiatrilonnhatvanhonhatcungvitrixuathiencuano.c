#include<stdio.h>
int max(int a[], int n){
	int i, k=n-1;
	for(i=n-1;i>=0;i--){
		if(a[i]>a[k]){
			k=i;
		}
	}
	return k;
}
int min(int a[], int n){
	int i, k=n-1;
	for(i=n-1;i>=0;i--){
		if(a[i]<a[k]){
			k=i;
		}
	}
	return k;
}
int main(){
	int a[100];
	int n, i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	int smax=max(a, n);
	int smin=min(a, n);
	printf("%d %d\n%d %d", a[smax], smax+1, a[smin], smin+1);
	return 0;
}

