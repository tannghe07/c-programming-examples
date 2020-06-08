#include<stdio.h>
#include<string.h>
struct node{
	char data[50];
};
int main(){
	int n=0, i, j, count1=0, count2=0, k=0;
	struct node tokenc[100];
	char s[100];
	int a[100];
	const char *delim=" ";
	gets(s);
	strlwr(s);
	char *token = strtok(s, delim);
	while(token != NULL){
		strcpy(tokenc[n++].data, token);
		token=strtok(NULL, delim);
	}
	for(i=0;i<n;i++){
		a[k]=strlen(tokenc[i].data);
		k++;
	}
	int max=0;
	for(i=0;i<k;i++){
		if(a[i]>max){
			max=a[i];
			count1=i;
		}
	}
	printf("%s ", tokenc[count1].data);
	int min=a[0];
	for(i=1;i<k;i++){
		if(a[i]<min){
			min=a[i];
			count2=i;
		}
	}
	printf("%s ", tokenc[count2].data);
	return 0;
}
