#include<stdio.h>
#include<string.h>
int main(){
	int i, j;
	char a[100];
	gets(a);
	j=strlen(a);
	for(i=0;i<j;i++){
		if(a[i]>=97 && a[i]<=121){
			a[i]-=32;
		}
	}
	printf("%s", a);
	return 0;
}

