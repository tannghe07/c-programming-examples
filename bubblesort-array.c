#include<stdio.h>
#define LENGTH 10
int* nhap(){
	static int arr[LENGTH];
	int i;
	for(i=0; i<LENGTH; i++){
		scanf("%d", &arr[i]);
	}
	return arr;
}
void xuat( const int arr[]){
	int i;
	for(i=0; i<LENGTH; i++){
		printf("%5d", arr[i]);
	}
	printf("\n");
}
void bubblesort1( int arr[] ){
	int i, j;
	
	for(i=0; i<LENGTH-1; i++){
		for(j=LENGTH-1; j>i; j--){
			if(arr[j]<arr[j-1]){
				int tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
			}
		}
	}
}
void bubblesort2( int arr[] ){
	int i, j;
	
	for(i=0; i<LENGTH-1; i++){
		for(j=LENGTH-1; j>i; j--){
			if(arr[j]>arr[j-1]){
				int tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
			}
		}
	}
}
void tong(int arr[]){
	int i;
	int j=0;
	for(i=0; i<LENGTH; i++){
		j+=arr[i];
	}printf("%d", j);
}
int main(){
	int *arr;
	int *j;
	arr=nhap();
	printf("\nTruoc khi sap xep: ");
	xuat(arr);
	printf("\nSau khi sap xep tang dan: ");
	bubblesort1(arr);
	xuat(arr);
	printf("\nSau khi sap xep giam dan: ");
	bubblesort2(arr);
	xuat(arr);
	printf("\nTong cac so vua nhap: ");
	tong(arr);
	return 0;
}

