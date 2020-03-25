#include<stdio.h>
#include<ctype.h>
int main(){
	char c;
	c=getchar();
	if(isupper(c)){
		printf("%c is upper", c);
		printf("\n%c after using tolower()", tolower(c));
	}
	else if(islower(c)){
		printf("%c is lower", c);
		printf("\n%c after using toupper()", toupper(c));
	}else printf("%c is not alpha ", c);
	return 0;
}

