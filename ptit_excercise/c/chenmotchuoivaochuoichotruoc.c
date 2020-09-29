#include<stdio.h>
#include<string.h>
int main(){
	char s[100], a[100];
	char c[100];
	int n, i, k=0, l=0;
	gets(s);
	gets(a);
	scanf("%d", &n);
	for(i=0;i<strlen(s)+strlen(a);i++){
		if(i>=n-1&&i<n+strlen(a)-1){
			c[i]=a[k];
			k++;
		}
		else{
			c[i]=s[l];
			l++;
		}
	}
	for(i=0;i<strlen(s)+strlen(a);i++){
		printf("%c", c[i]);
	}
	return 0;
}

