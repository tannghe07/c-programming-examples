#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	char a[100];
	char d[100];
	gets(s);
	int k=0, i, l=0, last = strlen(s)-1, dem=0;
	for(i=0;i<strlen(s);i++){
		if(s[i]==' '){
			dem++;
		}else break;
	}
	for(i=0;i<=strlen(s)-dem;i++){
		s[i]=s[i+dem];
	}
	while(s[last]==' '){
		s[last]='\0';
		last--;
	}
	for(i=strlen(s)-1;i>=0;i--){
		if(s[i]!=' '){
			d[l]=s[i];
			l++;
		}
		else break;
	}
	for(i=0;i<strlen(s);i++){
		a[0]=s[0];
		if(s[i]==' '&&s[i+1]!=' '){
			a[k+1]=s[i+1];
			k++;
		}
	}
	for(i=0;i<k;i++){
		if(a[i]>='A'&&a[i]<='Z') a[i]+=32;
	}
	for(i=0;i<l;i++){
		if(d[i]>='A'&&d[i]<='Z') d[i]+=32;
	}

	for(i=0;i<k;i++) printf("%c", a[i]);
	for(i=l-1;i>=0;i--) printf("%c", d[i]);
	printf("@ptit.edu.vn");
	return 0;
}
