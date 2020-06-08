#include<stdio.h>
int main(){
	int n, m, d=0, e=0, i, p;
	int a[100];
	int b[100];
	int c[200];
	scanf("%d%d", &n, &m);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<m;i++) scanf("%d", &b[i]);
	scanf("%d", &p);
	for(i=0;i<m+n;i++){
		if(i>=p&&i<p+m){
			c[i]=b[d];	
			d++;
		}
		else {
			c[i]=a[e];
			e++;
		}
	}
	for(i=0;i<m+n;i++){
		printf("%d ", c[i]);
	}
	return 0;
}

