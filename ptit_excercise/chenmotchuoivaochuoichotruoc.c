#include<stdio.h>
#include<string.h>
int chen(char *s, char *a, int vt)
{
	char c[100];
	strcpy(c, s+vt-1);
	strcpy(s+vt-1, a);
	strcat(s, c);
	printf("%s", s);
}
int main(){
	char s[100], a[100];
	int vt;
	gets(s);
	gets(a);
	scanf("%d", &vt);
	chen(s, a, vt);
	return 0;
}

