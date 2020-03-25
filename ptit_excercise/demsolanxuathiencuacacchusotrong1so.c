#include<stdio.h>
int main(){
	int n, i, c;
	scanf("%d", &n);
	int arr[n];
	while(n){
		c=n%10;
		arr[c]++;
		n/=10;
	}
	for(i=0; i<=9; i++){
		if(arr[i]>0) printf("%d %d\n", i, arr[i]);
	}
	return 0;
}

