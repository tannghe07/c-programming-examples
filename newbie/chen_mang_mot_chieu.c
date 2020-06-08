#include<stdio.h>
int main(){
	int n, m, p,  i, c=0, d=0;
	int a[100];
	int b[100];
	int e[200];
	scanf("%d%d%d", &n, &m, &p);
	for(i=0;i<n;i++) scanf("%d", &a[i]);
	for(i=0;i<m;i++) scanf("%d", &b[i]);
	for(i=0;i<n+m;i++){
		if(i>=p&&i<p+m){
			e[i]=b[c];
			c++;
		}else {
			e[i]=a[d];
			d++;
		}
	}for(i=0;i<m+n;i++) printf("%d ", e[i]);
	return 0;
}

