#include<stdio.h>
#include<string.h>
struct node{
	char data[50];
};
int main(){
	int n=0, i, j;
	struct node tokenc[100];
	char s[100];
	const char *delim=" ";
	int a[100];
	gets(s);
	strlwr(s);
	char *token = strtok(s, delim);
	while(token != NULL){
		strcpy(tokenc[n++].data, token);
		token=strtok(NULL, delim);
	}
	for(i=0;i<n;i++) a[i]=1;
	for(i=0;i<n;i++){
		if(a[i]){
			a[i]=0;
			for(j=i+1;j<n;j++){
				if(strcmp(tokenc[i].data, tokenc[j].data)==0){
					a[j]=0;
				}
			}
			printf("%s ", tokenc[i].data);
		}
	}
	return 0;
}
