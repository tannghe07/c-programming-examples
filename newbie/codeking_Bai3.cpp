#include<stdio.h>
void sapXep(int a[], int n){
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
}
int main(){
	int n, i, j;
	int a[n];
	int count;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	sapXep(a, n);
	for(i=0;i<n;i++){
		count=0;
		for(j=1;j<=a[0];j++){
			if(a[0]%j==0){
				if(a[i]%j==0&&i>0){
					count++;
				}
			}
		}	
	}
	printf("%d", count);
	return 0;
}

