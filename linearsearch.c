#include<stdio.h>
#define L 10

int* nhap(){
	static int arr[L];
	int i;
	for(i=0; i<L; i++){
		scanf("%d", &arr[i]);
	}return arr;
}
void hienthi( const int arr[]){
	int i;
	for(i=0; i<L; i++){
		printf("%5d", arr[i]);
	}printf("\n");
}
int search(int arr[], int x){
	int i;
	for(i=0; i<L; i++){
		if(arr[i]==x)
			return 1;
	}return 0;
}
int count(int arr[], int x){
	int i, count=0;
	for(i=0; i<L; i++){
		if(arr[i]==x)
			count++;
	}return count;
}

int main(){
	int *arr;
	int x;
	arr=nhap();
	hienthi(arr);
	printf("Nhap x: ");
	scanf("%d", &x);
	if(search(arr, x)){
		printf("x co trong mang\n");
		printf("x xuat hien: %d lan", count(arr, x));
}
	else
		printf("x khong xuat hien trong mang");
	return 0;
}

