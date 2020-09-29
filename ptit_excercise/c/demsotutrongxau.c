#include<stdio.h>
#include<string.h>
int whiteSpace(char c){
	return ( c == ' ' || c == '\t' );
}
int count(char *arr){
	int count = 0;
	int i;
	int size = strlen(arr);
	for(i=0;i<size-1;i++){
		if( !whiteSpace(arr[i]) && whiteSpace(arr[i+1]) || 
		!whiteSpace(arr[i]) && !whiteSpace(arr[i+1]) && i+1 == size-1 ){
			count++;
		}
	}
	return count;
}
int main(){
	char a[1000];
	fgets(a, 999, stdin);
	printf("%d", count(a));
	return 0;
}

