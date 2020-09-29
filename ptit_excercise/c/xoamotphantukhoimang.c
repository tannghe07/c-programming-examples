#include<stdio.h>
int main(){
	int n, i, k=0, p, l=0;
	int a[100];
	int c[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	scanf("%d", &p);
	for(i=0;i<n-1;i++){
		if(i>=0&&i<p-1){
			c[i]=a[k];
			k++;
		}
		else if(i>=p-1&&i<n-1){
			c[i]=a[l+p];
			l++;
		}
	}
	for(i=0;i<n-1;i++) printf("%d ", c[i]);
	return 0;
}

