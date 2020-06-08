#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct node{
	char data[50];
	int count;
};
void themHoacDem(char *word, struct node *words, int *size){
	int i;
	bool tonTai=false;
	for(i=0;i<*size;i++){
		if(strcmp(word, words[i].data)==0){
			words[i].count++;
			tonTai=true;
			break;
		}
	}
	if(!tonTai){
		strcpy(words[*size].data, word);
		words[*size].count=1;
		(*size)++;
	}
}
void tachVaDem(char *s, struct node *word, int *size){
	char *p;
	const char *delim=" \t";
	for(p=strtok(s, delim); p!=NULL; p=strtok(NULL, delim)){
		themHoacDem(p, word, size);
	}
}
void hienThi(struct node *words, int size){
	int i;
	for(i=0;i<size;i++){
		printf("%s %d\n", words[i].data, words[i].count);
	}
}
int main(){
	char s[1000];
	gets(s);
	strlwr(s);
	struct node words[200];
	int size=0;
	
	tachVaDem(s, words, &size);
	hienThi(words, size);
	return 0;
}

