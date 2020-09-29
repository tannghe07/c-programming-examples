#include<stdio.h>
#include<string.h>
#define max 100
int main(){
	int i, j;
	char arr[max];
	gets(arr);
	j=strlen(arr);
	for(i=0;i<j;i++){
		if(arr[i]>=65&&arr[i]<=90){
			arr[i]+=32;
		}
		else if(arr[i]>=97&&arr[i]<=122){
			arr[i]-=32;
		}
	}		
	printf("%s", arr);
	return 0;
}

