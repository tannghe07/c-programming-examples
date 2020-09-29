#include<stdio.h>
int main(){
	int n, i;
	int a[100];
	int max1=0, max2=0;
	scanf("%d",  &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(i=0;i<n;i++){
		if(max1<a[i]) max1=a[i];
	}
	for(i=0;i<n;i++){
		if(max1==a[i]){
			continue;
		}
		else if(max2<a[i]){
			max2=a[i];
		}
	}
	printf("%d", max2);
	return 0;
}

