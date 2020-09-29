#include<stdio.h>
#include<string.h>
struct node{
	char data[100];
};
int main(){
	struct node tokenn[100];
	char s[100];
	int n=0, i, k=0, count1=0, count2=0;
	int a[100];
	gets(s);
	strlwr(s);
	const char *delim=" ";
	char *token=strtok(s, delim);
	while(token!=NULL){
		strcpy(tokenn[n++].data, token);
		token=strtok(NULL, delim);
	}
	for(i=0;i<n;i++){
		a[k]=strlen(tokenn[i].data);
		k++;
	}
	int max=0;
	for(i=0;i<k;i++){
		if(a[i]>max){
			max=a[i];
			count1=i;
		}
	}
	printf("%s ", tokenn[count1].data);
	int min=a[0];
	for(i=1;i<k;i++){
		if(a[i]<min){
			min=a[i];
			count2=i;
		}
	}
	printf("%s ", tokenn[count2].data);
	return 0;
}

