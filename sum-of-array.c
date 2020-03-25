#include<stdio.h>
#define L 10
int* nhap(){
	static int arr[L];
	int i;
	for(i=0; i<L; i++){
		scanf("%d", &arr[i]);
	}
	return arr;
}
void tong( int arr[]){
	int i;
	int j=0;
	for(i=0;i<L;i++){
		j+=arr[i];
	}printf("%d", j);
}
int main(){
	int *arr;
	arr=nhap();
	printf("Tong cua cac so vua nhap: ");
	tong(arr);
	return 0;
}

