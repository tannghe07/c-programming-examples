#include<stdio.h>
#define L 10
int nhap(int arr[L]){
	int i;
	for(i=0; i<L; i++){
		scanf("%d", &arr[i]);
	}
}
void hienthi(const int arr[]){
	int i;
	for(i=0; i<L; i++){
		printf("%5d", arr[i]);
	}printf("\n");
}
void sapxep(int arr[]){
	int i, j;
	for(i=0; i<L-1; i++){
		for(j=L-1; j>i; j--){
			if(arr[j]<arr[j-1]){
				int tmp=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=tmp;
			}
		}
	}
}
int binarySearch(int arr[], int x){
	int left=0;
	int right=L-1;
	while(left<=right){
		int i=(left+right)/2;
		if(arr[i]==x)
			return 1;
		else if(arr[i]>x)
			right= i-1;
		else 
			left=i+1;
	}return 0;
	
}

int main(){
	int arr[L];
	int x;
	nhap(arr);
	sapxep(arr);
	hienthi(arr);
	while(1){
		printf("\nNhap x= ");
		scanf("%d", &x);
		if(x==2507) break;
		if(binarySearch(arr, x))
			printf("\nTim thay!");
		else 
			printf("\nKhong tim thay!");
	}
	
	return 0;
}

