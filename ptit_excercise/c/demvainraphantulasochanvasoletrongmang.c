#include<stdio.h>
void nhap(int a[100], int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
}
void xuat(int a[100], int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int n, i, j=0, k=0, count1=0, count2=0;
	int a[100], b[100], c[100];
	scanf("%d", &n);
	nhap(a, n);
	for(i=0;i<n;i++){
		if(a[i]%2!=0){
			b[j]=a[i];
			j++;
			count1++;
		}
		else{
			c[k]=a[i];
			k++;
			count2++;
		}
	}
	printf("%d ", count1);
	xuat(b, j);
	printf("\n%d ", count2);
	xuat(c, k);
	return 0;
}

