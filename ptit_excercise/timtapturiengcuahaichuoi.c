#include<stdio.h>
#include<string.h>
struct node{
	char data[50];
};
int main(){
	int n=0, m=0, i, j, k;
	struct node tokenc1[100];
	struct node tokenc2[100];
	char s1[100];
	char s2[100];
	char s4[100];
	const char *delim=" ";
	int a[100];
	gets(s1);
	gets(s2);
	strlwr(s1);
	char *token1 = strtok(s1, delim);
	while(token1 != NULL){
		strcpy(tokenc1[n++].data, token1);
		token1=strtok(NULL, delim);
	}
	char *token2 = strtok(s2, delim);
	while(token2 != NULL){
		strcpy(tokenc2[m++].data, token2);
		token2=strtok(NULL, delim);
	}
	for (i = 1; i < n; i++) {
      for (j = 1; j < n; j++) {
         if (strcmp(tokenc1[j - 1].data, tokenc1[j].data) > 0) {
            strcpy(s4, tokenc1[j - 1].data);
            strcpy(tokenc1[j - 1].data, tokenc1[j].data);
            strcpy(tokenc1[j].data, s4);
         }
      }
   }
	for(i=0;i<n;i++) a[i]=1;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(strcmp(tokenc1[i].data, tokenc2[j].data)==0){
				a[i]=0;
			}
		}
		for(k=i+1;k<n;k++){
			if(strcmp(tokenc1[i].data, tokenc1[k].data)==0){
				a[k]=0;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i]==1) printf("%s ", tokenc1[i].data);
	}
	return 0;
}

