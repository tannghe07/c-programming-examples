#include<stdio.h>
#define max 100
int dem(int n){
	int count=0;
	while(n>=10){
		n/=10;
		count++;
	}
	return count+1;
}
int main(){
	int arr[max];
	int n, i, j=0, a, b;
	scanf("%d", &n);
	j=dem(n);
	for(i=0;i<j;i++){
		arr[i]=n%10;
		n/=10;
	}
	printf("%d %d", arr[j-1], arr[0]);
	return 0;
}

