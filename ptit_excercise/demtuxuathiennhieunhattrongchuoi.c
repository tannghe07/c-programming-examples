#include<stdio.h>
#include<string.h>
struct node{
	char data[50];
};
int main(){
	int n=0, i, j, count, k, max;
	struct node tokenc[100];
	char s[100];
	const char *delim=" ";
	gets(s);
	strlwr(s);
	char *token = strtok(s, delim);
	while(token != NULL){
		strcpy(tokenc[n++].data, token);
		token=strtok(NULL, delim);
	}
	max=0;
	for(i=0;i<n;i++){
		count=1;
		for(j=i+1;j<n;j++){
			if(strcmp(tokenc[i].data, tokenc[j].data)==0) count++;
		}
		if(count>max){
			max=count;
			k=i;
		}
	}
	printf("%s %d", tokenc[k].data, max);
	return 0;
}

