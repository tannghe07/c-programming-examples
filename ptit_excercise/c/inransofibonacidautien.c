#include<stdio.h>
int main(){
	int n, i;
	int arr[100];
	scanf("%d", &n);
	arr[0]= 0;
	arr[1]= 1;
	if(n>=2&&n<=92){
		for(i=2;i<=n;i++){
			arr[i]=arr[i-1]+arr[i-2];
		}
	}for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}
	return 0;
}

