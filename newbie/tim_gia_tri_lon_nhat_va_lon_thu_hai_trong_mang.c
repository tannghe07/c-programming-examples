#include<stdio.h>
int main(){
	int n, i, max2;
	int a[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	int max1=a[0];
	for(i=1;i<n;i++){
		if(a[i]>max1){
			max1=a[i];
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==max1){
			continue;
		}
		else if(max2<a[i]){
			max2=a[i];
		}
	}
	printf("%d %d", max1, max2);
	return 0;
}

