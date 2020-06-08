#include<stdio.h>
/*void sapxep(int a[100], int n){
	int i, j;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}*/
int main(){
	int n, i, j;
	int a[100];
	int min1=0, min2=0;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	min1=a[0];
	for(i=1;i<n;i++){
		if(a[i]<min1) min1=a[i];
	}
	min2=999999;
	for(i=1;i<n;i++){
		if(a[i]<min2&&a[i]!=min1) min2=a[i];
	}
	printf("%d %d", min1, min2);
	return 0;
}

