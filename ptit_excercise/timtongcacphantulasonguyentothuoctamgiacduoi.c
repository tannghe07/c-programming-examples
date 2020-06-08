#include<stdio.h>
#include<stdbool.h>
#define max 100
void nhap(int arr[max][max], int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d", &arr[i][j]);
		}
	}
}
int kiemtra(int n){
	int i;
	if(n<2) return false;
	for(i=2;i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int main(){
	int arr[max][max];
	int n, i, j;
	scanf("%d", &n);
	nhap(arr, n);
	int sum=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i>=j){
				if(kiemtra(arr[i][j])){
					sum+=arr[i][j];
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}

