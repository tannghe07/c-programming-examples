#include<stdio.h>
#define max 100
void nhap(int arr[max], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
}
void sapxep(int arr[max], int n){
	int i, j;
	for(j=0;j<n-1;j++){
		for(i=n-1;i>j;i--){
			if(arr[i-1]>arr[i]){
				int tmp=arr[i-1];
				arr[i-1]=arr[i];
				arr[i]=tmp;
			}
		}
	}
}
void xuat(int arr[max], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int a[max];
	int n;
	scanf("%d", &n);
	nhap(a, n);
	sapxep(a, n);
	xuat(a, n);
	return 0;
}

