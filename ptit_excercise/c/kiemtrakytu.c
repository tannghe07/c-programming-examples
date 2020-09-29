#include<stdio.h>
int main(){
	char kytu;
	scanf("%c", &kytu);
	if((kytu>='a'&&kytu<='z')||(kytu>='A'&&kytu<='Z')) printf("1");
	else printf("0");
	return 0;
}

