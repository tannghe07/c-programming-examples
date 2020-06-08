#include<stdio.h>
int main(){
	int n, i, a=0, b=0, p;
	int s[100];
	int c[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &s[i]);
	scanf("%d", &p);
	for(i=0;i<n;i++){
		if(i>=0&&i<p){
			c[i]=s[n-p+a];
			a++;
		}
		else{
			c[i]=s[b];
			b++;
		}
	}
	for(i=0;i<n;i++) printf("%d ", c[i]);
	return 0;
}

