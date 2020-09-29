#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char *token;
	gets(a);
	token = strtok(a, " ");
	while( token != NULL){
		printf("%s", token );
		token = strtok(NULL, " ");
	}
	return 0;
}

