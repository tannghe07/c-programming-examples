#include<stdio.h>
int main(){
	int n, i, a=0, b=0, count1=0, count2=0;
	int s[100], c[100], d[100];
	scanf("%d", &n);
	for(i=0;i<n;i++) scanf("%d", &s[i]);
	for(i=0;i<n;i++){
		if(s[i]%2==0){
			c[a]=s[i];
			a++;
			count1++;
		}
		else {
			d[b]=s[i];
			b++;
			count2++;
		}
	}
	printf("%d ", count2);
	for(i=0;i<b;i++) printf("%d ", d[i]);
	printf("\n%d ", count1);
	for(i=0;i<a;i++) printf("%d ", c[i]);
	return 0;
}

