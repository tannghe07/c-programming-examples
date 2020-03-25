#include<stdio.h>
int nhap(int a[], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}
int max(int a[], int n){
	int i;
	int MAX=a[0];
	for(i=0;i<n;i++){
		if(MAX<a[i])
			MAX=a[i];
	}return MAX;
}
int min(int a[], int n){
	int i;
	int MIN=a[0];
	for(i=0;i<n;i++){
		if(MIN>a[i])
			MIN=a[i];
	}return MIN;
}
int main(){
	int n;
	scanf("%d", &n);
	int arr[n];
	nhap(arr, n);
	printf("%d %d", max(arr, n), min(arr, n));
	return 0;
}

