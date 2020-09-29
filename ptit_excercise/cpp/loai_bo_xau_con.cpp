#include<iostream>
#include<string.h>
using namespace std;
struct node{
	char data[50];
};
int main(){
	int n=0, i, j;
	struct node tokenc[100];
	char s[100];
	char b[100];
	const char *delim=" ";
	int a[100];
	gets(s);
	gets(b);
	strlwr(s);
	char *token = strtok(s, delim);
	while(token != NULL){
		strcpy(tokenc[n++].data, token);
		token=strtok(NULL, delim);
	}
	for(i=0;i<n;i++) a[i]=1;
	for(i=0;i<n;i++){
		if(strcmp(b, tokenc[i].data)==0){
			a[i]=0;
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==1) cout<<tokenc[i].data<<" ";
	}
	return 0;
}
