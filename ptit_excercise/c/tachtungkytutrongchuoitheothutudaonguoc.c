#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int b[100];
	int i, j, k=0;
	gets(a); 
	for(i=0;i<strlen(a);i++) b[i]=1;
	for(i=0;i<strlen(a);i++){
		if(b[i]){
			b[i]=1;
			for(j=i;j<strlen(a);j++){
				if(a[j]==' '){
					b[j]=0;
				}
			}
		}
	}
	for(i=strlen(a);i>=0;i--){
		if(b[i]==1) printf("%c ", a[i]);
	}
	return 0;
}

