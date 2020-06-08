#include<stdio.h>
int main(){
	int a[100];
	int b[100];
	int c[200];
	int i, p, n, m;
	scanf("%d%d%d", &n, &m, &p);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<m;i++) scanf("%d", &b[i]);
	int k=0, l=0;
	for(i=0;i<m+n;i++){
		if(i>=p&&i<p+m){
			c[i]=b[k];
			k++;
		}
		else{
			c[i]=a[l];
			l++;
		}
	}
	for(i=0;i<n+m;i++){
		printf("%d ", c[i]);
	}
	return 0;
}

