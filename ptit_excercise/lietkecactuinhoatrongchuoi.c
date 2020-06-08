#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	char a[100];
	char *token;
	int i;
	int kt;
	gets(s);
	token = strtok(s, " ");
	while(token != NULL){
		kt=0;
		for(i=0;i<strlen(token);i++){
			if(token[i]>='A'&&token[i]<='Z'||token[i]>='0'&&token[i]<='9'){
				kt++;
			}
		}
		if(kt==strlen(token)) printf("%s ", token);
		token = strtok(NULL, " ");
	}
	return 0;
}

