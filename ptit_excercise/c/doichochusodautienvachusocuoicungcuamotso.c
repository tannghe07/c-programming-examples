#include<stdio.h>
#define max 100
int dem(int n){
	int count=0;
	int i;
	while(n){
		n/=10;
		count++;
	}return count;
}
int main(){
	int m, i, j=0;
	int arr[max];
	scanf("%d", &m);
	int n=m;
	j=dem(n);
	for(i=j-1;i>=0;i--){
		arr[i]= m % 10;
		m/=10;
	}
	for(i=0;i<j;i++){
		int k=arr[0];
		arr[0]=arr[j-1];
		arr[j-1]=k;
		printf("%d", arr[i]);
	}
	return 0;
}

