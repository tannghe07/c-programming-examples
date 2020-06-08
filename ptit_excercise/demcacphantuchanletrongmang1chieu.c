#include<stdio.h>
int main(){
	int n, i, count1=0, count2=0;
	scanf("%d", &n);
	int arr[n];
	int brr[100];
	int crr[100];
	int m=0;
	int k=0;
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%2==0){
			count1++;
			brr[m]=arr[i];
			m++;
		}
		else{
			count2++;
			crr[k]=arr[i];
			k++;
		}
	}
	printf("%d ", count1);
	for(i=0;i<m;i++){
		printf("%d ", brr[i]);
	}printf("\n");
	printf("%d ", count2);
	for(i=0;i<k;i++){
		printf("%d ", crr[i]);
	}
	return 0;
}

