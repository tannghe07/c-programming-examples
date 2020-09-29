#include<stdio.h>
#define max 100
void nhap(int arr[max], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
}
int main(){
	int a[max];
	int n, i, count1=0, count2=0;
	scanf("%d", &n);
	nhap(a, n);
	for(i=0;i<n;i++){
		if(a[i]%2==0){
			count1++;
		}
		else{
			count2++;
		}
	}printf("%d %d", count1, count2);
	return 0;
}

