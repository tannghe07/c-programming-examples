#include<stdio.h>
#define MAX 100
void nhap(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
}
int kiemtra(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		if(arr[i]==arr[n-i-1]) return 1;
		else return 0;
	}
}
int main(){
	int i, n;
	int arr[MAX];
	scanf("%d", &n);
	nhap(arr, n);
	if(kiemtra(arr, n)==1) printf("1");
	else printf("0");
	return 0;
}

